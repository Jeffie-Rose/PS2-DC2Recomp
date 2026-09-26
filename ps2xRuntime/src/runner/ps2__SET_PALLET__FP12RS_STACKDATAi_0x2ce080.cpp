#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_PALLET__FP12RS_STACKDATAi
// Address: 0x2ce080 - 0x2ce190
void ps2__SET_PALLET__FP12RS_STACKDATAi_0x2ce080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_PALLET__FP12RS_STACKDATAi_0x2ce080");
#endif

    switch (ctx->pc) {
        case 0x2ce0ccu: goto label_2ce0cc;
        case 0x2ce0dcu: goto label_2ce0dc;
        case 0x2ce0ecu: goto label_2ce0ec;
        case 0x2ce0fcu: goto label_2ce0fc;
        case 0x2ce10cu: goto label_2ce10c;
        case 0x2ce124u: goto label_2ce124;
        case 0x2ce164u: goto label_2ce164;
        default: break;
    }

    ctx->pc = 0x2ce080u;

    // 0x2ce080: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ce080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2ce084: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2ce084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2ce088: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ce088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2ce08c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ce08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2ce090: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ce090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ce094: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2ce094u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce098: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ce098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ce09c: 0x2aa20005  slti        $v0, $s5, 0x5
    ctx->pc = 0x2ce09cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2ce0a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ce0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ce0a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ce0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ce0a8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE0A8u;
    {
        const bool branch_taken_0x2ce0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE0A8u;
            // 0x2ce0ac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce0a8) {
            ctx->pc = 0x2CE0BCu;
            goto label_2ce0bc;
        }
    }
    ctx->pc = 0x2CE0B0u;
    // 0x2ce0b0: 0x2aa10007  slti        $at, $s5, 0x7
    ctx->pc = 0x2ce0b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2ce0b4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE0B4u;
    {
        const bool branch_taken_0x2ce0b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE0B4u;
            // 0x2ce0b8: 0x24960008  addiu       $s6, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce0b4) {
            ctx->pc = 0x2CE0C4u;
            goto label_2ce0c4;
        }
    }
    ctx->pc = 0x2CE0BCu;
label_2ce0bc:
    // 0x2ce0bc: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2CE0BCu;
    {
        const bool branch_taken_0x2ce0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE0BCu;
            // 0x2ce0c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce0bc) {
            ctx->pc = 0x2CE168u;
            goto label_2ce168;
        }
    }
    ctx->pc = 0x2CE0C4u;
label_2ce0c4:
    // 0x2ce0c4: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CE0C4u;
    SET_GPR_U32(ctx, 31, 0x2CE0CCu);
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE0CCu; }
        if (ctx->pc != 0x2CE0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE0CCu; }
        if (ctx->pc != 0x2CE0CCu) { return; }
    }
    ctx->pc = 0x2CE0CCu;
label_2ce0cc:
    // 0x2ce0cc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ce0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce0d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ce0d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce0d4: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CE0D4u;
    SET_GPR_U32(ctx, 31, 0x2CE0DCu);
    ctx->pc = 0x2CE0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE0D4u;
            // 0x2ce0d8: 0x24960008  addiu       $s6, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE0DCu; }
        if (ctx->pc != 0x2CE0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE0DCu; }
        if (ctx->pc != 0x2CE0DCu) { return; }
    }
    ctx->pc = 0x2CE0DCu;
label_2ce0dc:
    // 0x2ce0dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ce0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce0e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ce0e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce0e4: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CE0E4u;
    SET_GPR_U32(ctx, 31, 0x2CE0ECu);
    ctx->pc = 0x2CE0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE0E4u;
            // 0x2ce0e8: 0x24960008  addiu       $s6, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE0ECu; }
        if (ctx->pc != 0x2CE0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE0ECu; }
        if (ctx->pc != 0x2CE0ECu) { return; }
    }
    ctx->pc = 0x2CE0ECu;
label_2ce0ec:
    // 0x2ce0ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ce0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce0f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ce0f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce0f4: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CE0F4u;
    SET_GPR_U32(ctx, 31, 0x2CE0FCu);
    ctx->pc = 0x2CE0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE0F4u;
            // 0x2ce0f8: 0x24960008  addiu       $s6, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE0FCu; }
        if (ctx->pc != 0x2CE0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE0FCu; }
        if (ctx->pc != 0x2CE0FCu) { return; }
    }
    ctx->pc = 0x2CE0FCu;
label_2ce0fc:
    // 0x2ce0fc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ce0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce100: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ce100u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce104: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CE104u;
    SET_GPR_U32(ctx, 31, 0x2CE10Cu);
    ctx->pc = 0x2CE108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE104u;
            // 0x2ce108: 0x24960008  addiu       $s6, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE10Cu; }
        if (ctx->pc != 0x2CE10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE10Cu; }
        if (ctx->pc != 0x2CE10Cu) { return; }
    }
    ctx->pc = 0x2CE10Cu;
label_2ce10c:
    // 0x2ce10c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2ce10cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce110: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2ce110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ce114: 0x16a30003  bne         $s5, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE114u;
    {
        const bool branch_taken_0x2ce114 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CE118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE114u;
            // 0x2ce118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce114) {
            ctx->pc = 0x2CE124u;
            goto label_2ce124;
        }
    }
    ctx->pc = 0x2CE11Cu;
    // 0x2ce11c: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CE11Cu;
    SET_GPR_U32(ctx, 31, 0x2CE124u);
    ctx->pc = 0x2CE120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE11Cu;
            // 0x2ce120: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE124u; }
        if (ctx->pc != 0x2CE124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE124u; }
        if (ctx->pc != 0x2CE124u) { return; }
    }
    ctx->pc = 0x2CE124u;
label_2ce124:
    // 0x2ce124: 0x2543c  dsll32      $t2, $v0, 16
    ctx->pc = 0x2ce124u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ce128: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2ce128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2ce12c: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2ce12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2ce130: 0x102c3c  dsll32      $a1, $s0, 16
    ctx->pc = 0x2ce130u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2ce134: 0x11343c  dsll32      $a2, $s1, 16
    ctx->pc = 0x2ce134u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2ce138: 0x123c3c  dsll32      $a3, $s2, 16
    ctx->pc = 0x2ce138u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) << (32 + 16));
    // 0x2ce13c: 0x13443c  dsll32      $t0, $s3, 16
    ctx->pc = 0x2ce13cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) << (32 + 16));
    // 0x2ce140: 0x144c3c  dsll32      $t1, $s4, 16
    ctx->pc = 0x2ce140u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 20) << (32 + 16));
    // 0x2ce144: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2ce144u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2ce148: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2ce148u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2ce14c: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x2ce14cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x2ce150: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2ce150u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2ce154: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x2ce154u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x2ce158: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x2ce158u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x2ce15c: 0xc070488  jal         func_1C1220
    ctx->pc = 0x2CE15Cu;
    SET_GPR_U32(ctx, 31, 0x2CE164u);
    ctx->pc = 0x2CE160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE15Cu;
            // 0x2ce160: 0x24440734  addiu       $a0, $v0, 0x734 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1844));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1220u;
    if (runtime->hasFunction(0x1C1220u)) {
        auto targetFn = runtime->lookupFunction(0x1C1220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE164u; }
        if (ctx->pc != 0x2CE164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAnim__12CPalletAnimeFssssss_0x1c1220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE164u; }
        if (ctx->pc != 0x2CE164u) { return; }
    }
    ctx->pc = 0x2CE164u;
label_2ce164:
    // 0x2ce164: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce168:
    // 0x2ce168: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2ce168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ce16c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2ce16cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ce170: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ce170u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ce174: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ce174u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ce178: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ce178u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ce17c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ce17cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ce180: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ce180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce184: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ce184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce188: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE188u;
            // 0x2ce18c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE190u;
}
