#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _d2b
// Address: 0x128058 - 0x1281d4
void _d2b_0x128058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_d2b_0x128058");
#endif

    switch (ctx->pc) {
        case 0x12808cu: goto label_12808c;
        case 0x1280f4u: goto label_1280f4;
        case 0x128158u: goto label_128158;
        case 0x1281a0u: goto label_1281a0;
        default: break;
    }

    ctx->pc = 0x128058u;

    // 0x128058: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x128058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x12805c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12805cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x128060: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x128060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128064: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x128064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x128068: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x128068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x12806c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x12806cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128070: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x128070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x128074: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x128074u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128078: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x128078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x12807c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x12807cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x128080: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x128080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x128084: 0xc049cba  jal         func_1272E8
    ctx->pc = 0x128084u;
    SET_GPR_U32(ctx, 31, 0x12808Cu);
    ctx->pc = 0x128088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128084u;
            // 0x128088: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272E8u;
    if (runtime->hasFunction(0x1272E8u)) {
        auto targetFn = runtime->lookupFunction(0x1272E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12808Cu; }
        if (ctx->pc != 0x12808Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x1272e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12808Cu; }
        if (ctx->pc != 0x12808Cu) { return; }
    }
    ctx->pc = 0x12808Cu;
label_12808c:
    // 0x12808c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12808cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128090: 0x10283f  dsra32      $a1, $s0, 0
    ctx->pc = 0x128090u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x128094: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x128094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x128098: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x128098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x12809c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12809cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1280a0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1280a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1280a4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1280a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1280a8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1280a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1280ac: 0x2048024  and         $s0, $s0, $a0
    ctx->pc = 0x1280acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x1280b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1280b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1280b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1280b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1280b8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1280b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1280bc: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1280bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1280c0: 0x26330014  addiu       $s3, $s1, 0x14
    ctx->pc = 0x1280c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1280c4: 0x10953e  dsrl32      $s2, $s0, 20
    ctx->pc = 0x1280c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) >> (32 + 20));
    // 0x1280c8: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1280C8u;
    {
        const bool branch_taken_0x1280c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1280CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1280C8u;
            // 0x1280cc: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1280c8) {
            ctx->pc = 0x1280DCu;
            goto label_1280dc;
        }
    }
    ctx->pc = 0x1280D0u;
    // 0x1280d0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1280d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1280d4: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x1280d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1280d8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1280d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_1280dc:
    // 0x1280dc: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x1280dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1280e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1280e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1280e4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1280E4u;
    {
        const bool branch_taken_0x1280e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1280E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1280E4u;
            // 0x1280e8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1280e4) {
            ctx->pc = 0x12814Cu;
            goto label_12814c;
        }
    }
    ctx->pc = 0x1280ECu;
    // 0x1280ec: 0xc049daa  jal         func_1276A8
    ctx->pc = 0x1280ECu;
    SET_GPR_U32(ctx, 31, 0x1280F4u);
    ctx->pc = 0x1280F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1280ECu;
            // 0x1280f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1276A8u;
    if (runtime->hasFunction(0x1276A8u)) {
        auto targetFn = runtime->lookupFunction(0x1276A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1280F4u; }
        if (ctx->pc != 0x1280F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _lo0bits_0x1276a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1280F4u; }
        if (ctx->pc != 0x1280F4u) { return; }
    }
    ctx->pc = 0x1280F4u;
label_1280f4:
    // 0x1280f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1280f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1280f8: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1280F8u;
    {
        const bool branch_taken_0x1280f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1280FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1280F8u;
            // 0x1280fc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1280f8) {
            ctx->pc = 0x128124u;
            goto label_128124;
        }
    }
    ctx->pc = 0x128100u;
    // 0x128100: 0x52023  negu        $a0, $a1
    ctx->pc = 0x128100u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x128104: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x128104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128108: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x128108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x12810c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12810cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x128110: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x128110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x128114: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x128114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x128118: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x128118u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x12811c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12811Cu;
    {
        const bool branch_taken_0x12811c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12811Cu;
            // 0x128120: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12811c) {
            ctx->pc = 0x12812Cu;
            goto label_12812c;
        }
    }
    ctx->pc = 0x128124u;
label_128124:
    // 0x128124: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128128: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x128128u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_12812c:
    // 0x12812c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x12812cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x128130: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x128130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128134: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x128134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x128138: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x128138u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
    // 0x12813c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x12813cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x128140: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x128140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128144: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x128144u;
    {
        const bool branch_taken_0x128144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128144u;
            // 0x128148: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128144) {
            ctx->pc = 0x12816Cu;
            goto label_12816c;
        }
    }
    ctx->pc = 0x12814Cu;
label_12814c:
    // 0x12814c: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x12814cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x128150: 0xc049daa  jal         func_1276A8
    ctx->pc = 0x128150u;
    SET_GPR_U32(ctx, 31, 0x128158u);
    ctx->pc = 0x128154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128150u;
            // 0x128154: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1276A8u;
    if (runtime->hasFunction(0x1276A8u)) {
        auto targetFn = runtime->lookupFunction(0x1276A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128158u; }
        if (ctx->pc != 0x128158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _lo0bits_0x1276a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128158u; }
        if (ctx->pc != 0x128158u) { return; }
    }
    ctx->pc = 0x128158u;
label_128158:
    // 0x128158: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x128158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12815c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12815cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128160: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x128160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x128164: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x128164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x128168: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x128168u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
label_12816c:
    // 0x12816c: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x12816Cu;
    {
        const bool branch_taken_0x12816c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x128170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12816Cu;
            // 0x128170: 0x24a2fbcd  addiu       $v0, $a1, -0x433 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966221));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12816c) {
            ctx->pc = 0x128188u;
            goto label_128188;
        }
    }
    ctx->pc = 0x128174u;
    // 0x128174: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x128174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x128178: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x128178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x12817c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x12817cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x128180: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x128180u;
    {
        const bool branch_taken_0x128180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128180u;
            // 0x128184: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128180) {
            ctx->pc = 0x1281A8u;
            goto label_1281a8;
        }
    }
    ctx->pc = 0x128188u;
label_128188:
    // 0x128188: 0x24a3fbce  addiu       $v1, $a1, -0x432
    ctx->pc = 0x128188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966222));
    // 0x12818c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x12818cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x128190: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x128190u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x128194: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x128194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x128198: 0xc049d88  jal         func_127620
    ctx->pc = 0x128198u;
    SET_GPR_U32(ctx, 31, 0x1281A0u);
    ctx->pc = 0x12819Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128198u;
            // 0x12819c: 0x8c44fffc  lw          $a0, -0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127620u;
    if (runtime->hasFunction(0x127620u)) {
        auto targetFn = runtime->lookupFunction(0x127620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1281A0u; }
        if (ctx->pc != 0x1281A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hi0bits_0x127620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1281A0u; }
        if (ctx->pc != 0x1281A0u) { return; }
    }
    ctx->pc = 0x1281A0u;
label_1281a0:
    // 0x1281a0: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x1281a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x1281a4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1281a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1281a8:
    // 0x1281a8: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1281a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x1281ac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1281acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1281b0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1281b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1281b4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1281b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1281b8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1281b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1281bc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1281bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1281c0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1281c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1281c4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1281c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1281c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1281c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1281cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1281CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1281D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1281CCu;
            // 0x1281d0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1281D4u;
}
