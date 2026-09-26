#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ReadBGTexture__10CMenuInterFii
// Address: 0x236100 - 0x236258
void ReadBGTexture__10CMenuInterFii_0x236100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReadBGTexture__10CMenuInterFii_0x236100");
#endif

    switch (ctx->pc) {
        case 0x236160u: goto label_236160;
        case 0x236168u: goto label_236168;
        case 0x236194u: goto label_236194;
        case 0x2361a8u: goto label_2361a8;
        case 0x2361ccu: goto label_2361cc;
        case 0x2361ecu: goto label_2361ec;
        case 0x236224u: goto label_236224;
        case 0x23622cu: goto label_23622c;
        default: break;
    }

    ctx->pc = 0x236100u;

    // 0x236100: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x236100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x236104: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x236104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x236108: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x236108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23610c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23610cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x236110: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x236110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236114: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x236114u;
    {
        const bool branch_taken_0x236114 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x236118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236114u;
            // 0x236118: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236114) {
            ctx->pc = 0x236128u;
            goto label_236128;
        }
    }
    ctx->pc = 0x23611Cu;
    // 0x23611c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x23611cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x236120: 0xa2220013  sb          $v0, 0x13($s1)
    ctx->pc = 0x236120u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 19), (uint8_t)GPR_U32(ctx, 2));
    // 0x236124: 0xa2200012  sb          $zero, 0x12($s1)
    ctx->pc = 0x236124u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 0));
label_236128:
    // 0x236128: 0x82220013  lb          $v0, 0x13($s1)
    ctx->pc = 0x236128u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 19)));
    // 0x23612c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x23612cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x236130: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x236130u;
    {
        const bool branch_taken_0x236130 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x236130) {
            ctx->pc = 0x236140u;
            goto label_236140;
        }
    }
    ctx->pc = 0x236138u;
    // 0x236138: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x236138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23613c: 0xa2220013  sb          $v0, 0x13($s1)
    ctx->pc = 0x23613cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 19), (uint8_t)GPR_U32(ctx, 2));
label_236140:
    // 0x236140: 0x82230012  lb          $v1, 0x12($s1)
    ctx->pc = 0x236140u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x236144: 0x14600033  bnez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x236144u;
    {
        const bool branch_taken_0x236144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x236148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236144u;
            // 0x236148: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236144) {
            ctx->pc = 0x236214u;
            goto label_236214;
        }
    }
    ctx->pc = 0x23614Cu;
    // 0x23614c: 0x82220013  lb          $v0, 0x13($s1)
    ctx->pc = 0x23614cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 19)));
    // 0x236150: 0x1c40002f  bgtz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x236150u;
    {
        const bool branch_taken_0x236150 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x236150) {
            ctx->pc = 0x236210u;
            goto label_236210;
        }
    }
    ctx->pc = 0x236158u;
    // 0x236158: 0xc0523b8  jal         func_148EE0
    ctx->pc = 0x236158u;
    SET_GPR_U32(ctx, 31, 0x236160u);
    ctx->pc = 0x148EE0u;
    if (runtime->hasFunction(0x148EE0u)) {
        auto targetFn = runtime->lookupFunction(0x148EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236160u; }
        if (ctx->pc != 0x236160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BreakReadBG__Fv_0x148ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236160u; }
        if (ctx->pc != 0x236160u) { return; }
    }
    ctx->pc = 0x236160u;
label_236160:
    // 0x236160: 0xc052330  jal         func_148CC0
    ctx->pc = 0x236160u;
    SET_GPR_U32(ctx, 31, 0x236168u);
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236168u; }
        if (ctx->pc != 0x236168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236168u; }
        if (ctx->pc != 0x236168u) { return; }
    }
    ctx->pc = 0x236168u;
label_236168:
    // 0x236168: 0x2602fffe  addiu       $v0, $s0, -0x2
    ctx->pc = 0x236168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x23616c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23616cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x236170: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x236170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x236174: 0xac20d544  sw          $zero, -0x2ABC($at)
    ctx->pc = 0x236174u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956356), GPR_U32(ctx, 0));
    // 0x236178: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x236178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x23617c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23617cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x236180: 0x24420b40  addiu       $v0, $v0, 0xB40
    ctx->pc = 0x236180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2880));
    // 0x236184: 0xac20d53c  sw          $zero, -0x2AC4($at)
    ctx->pc = 0x236184u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956348), GPR_U32(ctx, 0));
    // 0x236188: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x236188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23618c: 0xc04a422  jal         func_129088
    ctx->pc = 0x23618Cu;
    SET_GPR_U32(ctx, 31, 0x236194u);
    ctx->pc = 0x236190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23618Cu;
            // 0x236190: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236194u; }
        if (ctx->pc != 0x236194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236194u; }
        if (ctx->pc != 0x236194u) { return; }
    }
    ctx->pc = 0x236194u;
label_236194:
    // 0x236194: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x236194u;
    {
        const bool branch_taken_0x236194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236194u;
            // 0x236198: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236194) {
            ctx->pc = 0x2361F8u;
            goto label_2361f8;
        }
    }
    ctx->pc = 0x23619Cu;
    // 0x23619c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x23619cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2361a0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2361A0u;
    SET_GPR_U32(ctx, 31, 0x2361A8u);
    ctx->pc = 0x2361A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2361A0u;
            // 0x2361a4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2361A8u; }
        if (ctx->pc != 0x2361A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2361A8u; }
        if (ctx->pc != 0x2361A8u) { return; }
    }
    ctx->pc = 0x2361A8u;
label_2361a8:
    // 0x2361a8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2361a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2361ac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2361acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2361b0: 0x8c23d544  lw          $v1, -0x2ABC($at)
    ctx->pc = 0x2361b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956356)));
    // 0x2361b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2361b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2361b8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2361b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2361bc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2361bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2361c0: 0x8c22d540  lw          $v0, -0x2AC0($at)
    ctx->pc = 0x2361c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956352)));
    // 0x2361c4: 0xc094440  jal         func_251100
    ctx->pc = 0x2361C4u;
    SET_GPR_U32(ctx, 31, 0x2361CCu);
    ctx->pc = 0x2361C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2361C4u;
            // 0x2361c8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2361CCu; }
        if (ctx->pc != 0x2361CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2361CCu; }
        if (ctx->pc != 0x2361CCu) { return; }
    }
    ctx->pc = 0x2361CCu;
label_2361cc:
    // 0x2361cc: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2361ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2361d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2361D0u;
    {
        const bool branch_taken_0x2361d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2361D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2361D0u;
            // 0x2361d4: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2361d0) {
            ctx->pc = 0x2361E0u;
            goto label_2361e0;
        }
    }
    ctx->pc = 0x2361D8u;
    // 0x2361d8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x2361d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x2361dc: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2361dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2361e0:
    // 0x2361e0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2361e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x2361e4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2361E4u;
    SET_GPR_U32(ctx, 31, 0x2361ECu);
    ctx->pc = 0x2361E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2361E4u;
            // 0x2361e8: 0x2484d520  addiu       $a0, $a0, -0x2AE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2361ECu; }
        if (ctx->pc != 0x2361ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2361ECu; }
        if (ctx->pc != 0x2361ECu) { return; }
    }
    ctx->pc = 0x2361ECu;
label_2361ec:
    // 0x2361ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2361ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2361f0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2361F0u;
    {
        const bool branch_taken_0x2361f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2361F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2361F0u;
            // 0x2361f4: 0xa2220012  sb          $v0, 0x12($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2361f0) {
            ctx->pc = 0x236238u;
            goto label_236238;
        }
    }
    ctx->pc = 0x2361F8u;
label_2361f8:
    // 0x2361f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2361f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2361fc: 0xac20d544  sw          $zero, -0x2ABC($at)
    ctx->pc = 0x2361fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956356), GPR_U32(ctx, 0));
    // 0x236200: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x236200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x236204: 0xac20d53c  sw          $zero, -0x2AC4($at)
    ctx->pc = 0x236204u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956348), GPR_U32(ctx, 0));
    // 0x236208: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x236208u;
    {
        const bool branch_taken_0x236208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23620Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236208u;
            // 0x23620c: 0xa2220012  sb          $v0, 0x12($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236208) {
            ctx->pc = 0x236238u;
            goto label_236238;
        }
    }
    ctx->pc = 0x236210u;
label_236210:
    // 0x236210: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x236210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236214:
    // 0x236214: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x236214u;
    {
        const bool branch_taken_0x236214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x236214) {
            ctx->pc = 0x236238u;
            goto label_236238;
        }
    }
    ctx->pc = 0x23621Cu;
    // 0x23621c: 0xc052334  jal         func_148CD0
    ctx->pc = 0x23621Cu;
    SET_GPR_U32(ctx, 31, 0x236224u);
    ctx->pc = 0x148CD0u;
    if (runtime->hasFunction(0x148CD0u)) {
        auto targetFn = runtime->lookupFunction(0x148CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236224u; }
        if (ctx->pc != 0x236224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBG__Fv_0x148cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236224u; }
        if (ctx->pc != 0x236224u) { return; }
    }
    ctx->pc = 0x236224u;
label_236224:
    // 0x236224: 0xc05239c  jal         func_148E70
    ctx->pc = 0x236224u;
    SET_GPR_U32(ctx, 31, 0x23622Cu);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23622Cu; }
        if (ctx->pc != 0x23622Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23622Cu; }
        if (ctx->pc != 0x23622Cu) { return; }
    }
    ctx->pc = 0x23622Cu;
label_23622c:
    // 0x23622c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23622Cu;
    {
        const bool branch_taken_0x23622c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23622Cu;
            // 0x236230: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23622c) {
            ctx->pc = 0x236238u;
            goto label_236238;
        }
    }
    ctx->pc = 0x236234u;
    // 0x236234: 0xa2220012  sb          $v0, 0x12($s1)
    ctx->pc = 0x236234u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 2));
label_236238:
    // 0x236238: 0x82220012  lb          $v0, 0x12($s1)
    ctx->pc = 0x236238u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x23623c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23623cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x236240: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x236240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236244: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x236244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236248: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x236248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x23624c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x23624cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x236250: 0x3e00008  jr          $ra
    ctx->pc = 0x236250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236250u;
            // 0x236254: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x236258u;
}
