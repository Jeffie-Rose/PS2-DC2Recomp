#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_CHARA_SHOW__FP12RS_STACKDATAi
// Address: 0x26c090 - 0x26c1a0
void ps2__SET_CHARA_SHOW__FP12RS_STACKDATAi_0x26c090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_CHARA_SHOW__FP12RS_STACKDATAi_0x26c090");
#endif

    switch (ctx->pc) {
        case 0x26c090u: goto label_26c090;
        case 0x26c094u: goto label_26c094;
        case 0x26c098u: goto label_26c098;
        case 0x26c09cu: goto label_26c09c;
        case 0x26c0a0u: goto label_26c0a0;
        case 0x26c0a4u: goto label_26c0a4;
        case 0x26c0a8u: goto label_26c0a8;
        case 0x26c0acu: goto label_26c0ac;
        case 0x26c0b0u: goto label_26c0b0;
        case 0x26c0b4u: goto label_26c0b4;
        case 0x26c0b8u: goto label_26c0b8;
        case 0x26c0bcu: goto label_26c0bc;
        case 0x26c0c0u: goto label_26c0c0;
        case 0x26c0c4u: goto label_26c0c4;
        case 0x26c0c8u: goto label_26c0c8;
        case 0x26c0ccu: goto label_26c0cc;
        case 0x26c0d0u: goto label_26c0d0;
        case 0x26c0d4u: goto label_26c0d4;
        case 0x26c0d8u: goto label_26c0d8;
        case 0x26c0dcu: goto label_26c0dc;
        case 0x26c0e0u: goto label_26c0e0;
        case 0x26c0e4u: goto label_26c0e4;
        case 0x26c0e8u: goto label_26c0e8;
        case 0x26c0ecu: goto label_26c0ec;
        case 0x26c0f0u: goto label_26c0f0;
        case 0x26c0f4u: goto label_26c0f4;
        case 0x26c0f8u: goto label_26c0f8;
        case 0x26c0fcu: goto label_26c0fc;
        case 0x26c100u: goto label_26c100;
        case 0x26c104u: goto label_26c104;
        case 0x26c108u: goto label_26c108;
        case 0x26c10cu: goto label_26c10c;
        case 0x26c110u: goto label_26c110;
        case 0x26c114u: goto label_26c114;
        case 0x26c118u: goto label_26c118;
        case 0x26c11cu: goto label_26c11c;
        case 0x26c120u: goto label_26c120;
        case 0x26c124u: goto label_26c124;
        case 0x26c128u: goto label_26c128;
        case 0x26c12cu: goto label_26c12c;
        case 0x26c130u: goto label_26c130;
        case 0x26c134u: goto label_26c134;
        case 0x26c138u: goto label_26c138;
        case 0x26c13cu: goto label_26c13c;
        case 0x26c140u: goto label_26c140;
        case 0x26c144u: goto label_26c144;
        case 0x26c148u: goto label_26c148;
        case 0x26c14cu: goto label_26c14c;
        case 0x26c150u: goto label_26c150;
        case 0x26c154u: goto label_26c154;
        case 0x26c158u: goto label_26c158;
        case 0x26c15cu: goto label_26c15c;
        case 0x26c160u: goto label_26c160;
        case 0x26c164u: goto label_26c164;
        case 0x26c168u: goto label_26c168;
        case 0x26c16cu: goto label_26c16c;
        case 0x26c170u: goto label_26c170;
        case 0x26c174u: goto label_26c174;
        case 0x26c178u: goto label_26c178;
        case 0x26c17cu: goto label_26c17c;
        case 0x26c180u: goto label_26c180;
        case 0x26c184u: goto label_26c184;
        case 0x26c188u: goto label_26c188;
        case 0x26c18cu: goto label_26c18c;
        case 0x26c190u: goto label_26c190;
        case 0x26c194u: goto label_26c194;
        case 0x26c198u: goto label_26c198;
        case 0x26c19cu: goto label_26c19c;
        default: break;
    }

    ctx->pc = 0x26c090u;

label_26c090:
    // 0x26c090: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x26c090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_26c094:
    // 0x26c094: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x26c094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_26c098:
    // 0x26c098: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x26c098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_26c09c:
    // 0x26c09c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x26c09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_26c0a0:
    // 0x26c0a0: 0x24940008  addiu       $s4, $a0, 0x8
    ctx->pc = 0x26c0a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_26c0a4:
    // 0x26c0a4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x26c0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_26c0a8:
    // 0x26c0a8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x26c0a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26c0ac:
    // 0x26c0ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x26c0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_26c0b0:
    // 0x26c0b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26c0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_26c0b4:
    // 0x26c0b4: 0xc097e18  jal         func_25F860
label_26c0b8:
    if (ctx->pc == 0x26C0B8u) {
        ctx->pc = 0x26C0B8u;
            // 0x26c0b8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x26C0BCu;
        goto label_26c0bc;
    }
    ctx->pc = 0x26C0B4u;
    SET_GPR_U32(ctx, 31, 0x26C0BCu);
    ctx->pc = 0x26C0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C0B4u;
            // 0x26c0b8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C0BCu; }
        if (ctx->pc != 0x26C0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C0BCu; }
        if (ctx->pc != 0x26C0BCu) { return; }
    }
    ctx->pc = 0x26C0BCu;
label_26c0bc:
    // 0x26c0bc: 0xc09ac74  jal         func_26B1D0
label_26c0c0:
    if (ctx->pc == 0x26C0C0u) {
        ctx->pc = 0x26C0C0u;
            // 0x26c0c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C0C4u;
        goto label_26c0c4;
    }
    ctx->pc = 0x26C0BCu;
    SET_GPR_U32(ctx, 31, 0x26C0C4u);
    ctx->pc = 0x26C0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C0BCu;
            // 0x26c0c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C0C4u; }
        if (ctx->pc != 0x26C0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C0C4u; }
        if (ctx->pc != 0x26C0C4u) { return; }
    }
    ctx->pc = 0x26C0C4u;
label_26c0c4:
    // 0x26c0c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_26c0c8:
    if (ctx->pc == 0x26C0C8u) {
        ctx->pc = 0x26C0C8u;
            // 0x26c0c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C0CCu;
        goto label_26c0cc;
    }
    ctx->pc = 0x26C0C4u;
    {
        const bool branch_taken_0x26c0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C0C4u;
            // 0x26c0c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c0c4) {
            ctx->pc = 0x26C0D4u;
            goto label_26c0d4;
        }
    }
    ctx->pc = 0x26C0CCu;
label_26c0cc:
    // 0x26c0cc: 0x1000002b  b           . + 4 + (0x2B << 2)
label_26c0d0:
    if (ctx->pc == 0x26C0D0u) {
        ctx->pc = 0x26C0D0u;
            // 0x26c0d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C0D4u;
        goto label_26c0d4;
    }
    ctx->pc = 0x26C0CCu;
    {
        const bool branch_taken_0x26c0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C0CCu;
            // 0x26c0d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c0cc) {
            ctx->pc = 0x26C17Cu;
            goto label_26c17c;
        }
    }
    ctx->pc = 0x26C0D4u;
label_26c0d4:
    // 0x26c0d4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x26c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_26c0d8:
    // 0x26c0d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26c0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26c0dc:
    // 0x26c0dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x26c0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_26c0e0:
    // 0x26c0e0: 0x24940008  addiu       $s4, $a0, 0x8
    ctx->pc = 0x26c0e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_26c0e4:
    // 0x26c0e4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x26c0e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26c0e8:
    // 0x26c0e8: 0xc097e18  jal         func_25F860
label_26c0ec:
    if (ctx->pc == 0x26C0ECu) {
        ctx->pc = 0x26C0ECu;
            // 0x26c0ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C0F0u;
        goto label_26c0f0;
    }
    ctx->pc = 0x26C0E8u;
    SET_GPR_U32(ctx, 31, 0x26C0F0u);
    ctx->pc = 0x26C0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C0E8u;
            // 0x26c0ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C0F0u; }
        if (ctx->pc != 0x26C0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C0F0u; }
        if (ctx->pc != 0x26C0F0u) { return; }
    }
    ctx->pc = 0x26C0F0u;
label_26c0f0:
    // 0x26c0f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26c0f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26c0f4:
    // 0x26c0f4: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x26c0f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
label_26c0f8:
    // 0x26c0f8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_26c0fc:
    if (ctx->pc == 0x26C0FCu) {
        ctx->pc = 0x26C0FCu;
            // 0x26c0fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C100u;
        goto label_26c100;
    }
    ctx->pc = 0x26C0F8u;
    {
        const bool branch_taken_0x26c0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C0F8u;
            // 0x26c0fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c0f8) {
            ctx->pc = 0x26C124u;
            goto label_26c124;
        }
    }
    ctx->pc = 0x26C100u;
label_26c100:
    // 0x26c100: 0xc097e18  jal         func_25F860
label_26c104:
    if (ctx->pc == 0x26C104u) {
        ctx->pc = 0x26C104u;
            // 0x26c104: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26C108u;
        goto label_26c108;
    }
    ctx->pc = 0x26C100u;
    SET_GPR_U32(ctx, 31, 0x26C108u);
    ctx->pc = 0x26C104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C100u;
            // 0x26c104: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C108u; }
        if (ctx->pc != 0x26C108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C108u; }
        if (ctx->pc != 0x26C108u) { return; }
    }
    ctx->pc = 0x26C108u;
label_26c108:
    // 0x26c108: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26c108u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26c10c:
    // 0x26c10c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26c10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26c110:
    // 0x26c110: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
label_26c114:
    if (ctx->pc == 0x26C114u) {
        ctx->pc = 0x26C114u;
            // 0x26c114: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C118u;
        goto label_26c118;
    }
    ctx->pc = 0x26C110u;
    {
        const bool branch_taken_0x26c110 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x26C114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C110u;
            // 0x26c114: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c110) {
            ctx->pc = 0x26C124u;
            goto label_26c124;
        }
    }
    ctx->pc = 0x26C118u;
label_26c118:
    // 0x26c118: 0xc097e28  jal         func_25F8A0
label_26c11c:
    if (ctx->pc == 0x26C11Cu) {
        ctx->pc = 0x26C120u;
        goto label_26c120;
    }
    ctx->pc = 0x26C118u;
    SET_GPR_U32(ctx, 31, 0x26C120u);
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C120u; }
        if (ctx->pc != 0x26C120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C120u; }
        if (ctx->pc != 0x26C120u) { return; }
    }
    ctx->pc = 0x26C120u;
label_26c120:
    // 0x26c120: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x26c120u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_26c124:
    // 0x26c124: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x26c124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26c128:
    // 0x26c128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26c128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26c12c:
    // 0x26c12c: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x26c12cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_26c130:
    // 0x26c130: 0x320f809  jalr        $t9
label_26c134:
    if (ctx->pc == 0x26C134u) {
        ctx->pc = 0x26C134u;
            // 0x26c134: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C138u;
        goto label_26c138;
    }
    ctx->pc = 0x26C130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26C138u);
        ctx->pc = 0x26C134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C130u;
            // 0x26c134: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26C138u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26C138u; }
            if (ctx->pc != 0x26C138u) { return; }
        }
        }
    }
    ctx->pc = 0x26C138u;
label_26c138:
    // 0x26c138: 0xae120054  sw          $s2, 0x54($s0)
    ctx->pc = 0x26c138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 18));
label_26c13c:
    // 0x26c13c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c140:
    // 0x26c140: 0x16420007  bne         $s2, $v0, . + 4 + (0x7 << 2)
label_26c144:
    if (ctx->pc == 0x26C144u) {
        ctx->pc = 0x26C144u;
            // 0x26c144: 0xe614005c  swc1        $f20, 0x5C($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
        ctx->pc = 0x26C148u;
        goto label_26c148;
    }
    ctx->pc = 0x26C140u;
    {
        const bool branch_taken_0x26c140 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x26C144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C140u;
            // 0x26c144: 0xe614005c  swc1        $f20, 0x5C($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c140) {
            ctx->pc = 0x26C160u;
            goto label_26c160;
        }
    }
    ctx->pc = 0x26C148u;
label_26c148:
    // 0x26c148: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
label_26c14c:
    if (ctx->pc == 0x26C14Cu) {
        ctx->pc = 0x26C14Cu;
            // 0x26c14c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x26C150u;
        goto label_26c150;
    }
    ctx->pc = 0x26C148u;
    {
        const bool branch_taken_0x26c148 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x26C14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C148u;
            // 0x26c14c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c148) {
            ctx->pc = 0x26C164u;
            goto label_26c164;
        }
    }
    ctx->pc = 0x26C150u;
label_26c150:
    // 0x26c150: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x26c150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_26c154:
    // 0x26c154: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x26c154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
label_26c158:
    // 0x26c158: 0x10000007  b           . + 4 + (0x7 << 2)
label_26c15c:
    if (ctx->pc == 0x26C15Cu) {
        ctx->pc = 0x26C15Cu;
            // 0x26c15c: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->pc = 0x26C160u;
        goto label_26c160;
    }
    ctx->pc = 0x26C158u;
    {
        const bool branch_taken_0x26c158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C158u;
            // 0x26c15c: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c158) {
            ctx->pc = 0x26C178u;
            goto label_26c178;
        }
    }
    ctx->pc = 0x26C160u;
label_26c160:
    // 0x26c160: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c164:
    // 0x26c164: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
label_26c168:
    if (ctx->pc == 0x26C168u) {
        ctx->pc = 0x26C168u;
            // 0x26c168: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x26C16Cu;
        goto label_26c16c;
    }
    ctx->pc = 0x26C164u;
    {
        const bool branch_taken_0x26c164 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x26C168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C164u;
            // 0x26c168: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c164) {
            ctx->pc = 0x26C17Cu;
            goto label_26c17c;
        }
    }
    ctx->pc = 0x26C16Cu;
label_26c16c:
    // 0x26c16c: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
label_26c170:
    if (ctx->pc == 0x26C170u) {
        ctx->pc = 0x26C170u;
            // 0x26c170: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x26C174u;
        goto label_26c174;
    }
    ctx->pc = 0x26C16Cu;
    {
        const bool branch_taken_0x26c16c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C16Cu;
            // 0x26c170: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c16c) {
            ctx->pc = 0x26C178u;
            goto label_26c178;
        }
    }
    ctx->pc = 0x26C174u;
label_26c174:
    // 0x26c174: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x26c174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_26c178:
    // 0x26c178: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c17c:
    // 0x26c17c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x26c17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_26c180:
    // 0x26c180: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x26c180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_26c184:
    // 0x26c184: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x26c184u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26c188:
    // 0x26c188: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x26c188u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26c18c:
    // 0x26c18c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x26c18cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26c190:
    // 0x26c190: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x26c190u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26c194:
    // 0x26c194: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26c194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26c198:
    // 0x26c198: 0x3e00008  jr          $ra
label_26c19c:
    if (ctx->pc == 0x26C19Cu) {
        ctx->pc = 0x26C19Cu;
            // 0x26c19c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x26C1A0u;
        goto label_fallthrough_0x26c198;
    }
    ctx->pc = 0x26C198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C198u;
            // 0x26c19c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x26c198:
    ctx->pc = 0x26C1A0u;
}
