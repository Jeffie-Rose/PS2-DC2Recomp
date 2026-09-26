#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_POS__FP12RS_STACKDATAi
// Address: 0x2ce980 - 0x2ce9f8
void ps2__GET_POS__FP12RS_STACKDATAi_0x2ce980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_POS__FP12RS_STACKDATAi_0x2ce980");
#endif

    switch (ctx->pc) {
        case 0x2ce980u: goto label_2ce980;
        case 0x2ce984u: goto label_2ce984;
        case 0x2ce988u: goto label_2ce988;
        case 0x2ce98cu: goto label_2ce98c;
        case 0x2ce990u: goto label_2ce990;
        case 0x2ce994u: goto label_2ce994;
        case 0x2ce998u: goto label_2ce998;
        case 0x2ce99cu: goto label_2ce99c;
        case 0x2ce9a0u: goto label_2ce9a0;
        case 0x2ce9a4u: goto label_2ce9a4;
        case 0x2ce9a8u: goto label_2ce9a8;
        case 0x2ce9acu: goto label_2ce9ac;
        case 0x2ce9b0u: goto label_2ce9b0;
        case 0x2ce9b4u: goto label_2ce9b4;
        case 0x2ce9b8u: goto label_2ce9b8;
        case 0x2ce9bcu: goto label_2ce9bc;
        case 0x2ce9c0u: goto label_2ce9c0;
        case 0x2ce9c4u: goto label_2ce9c4;
        case 0x2ce9c8u: goto label_2ce9c8;
        case 0x2ce9ccu: goto label_2ce9cc;
        case 0x2ce9d0u: goto label_2ce9d0;
        case 0x2ce9d4u: goto label_2ce9d4;
        case 0x2ce9d8u: goto label_2ce9d8;
        case 0x2ce9dcu: goto label_2ce9dc;
        case 0x2ce9e0u: goto label_2ce9e0;
        case 0x2ce9e4u: goto label_2ce9e4;
        case 0x2ce9e8u: goto label_2ce9e8;
        case 0x2ce9ecu: goto label_2ce9ec;
        case 0x2ce9f0u: goto label_2ce9f0;
        case 0x2ce9f4u: goto label_2ce9f4;
        default: break;
    }

    ctx->pc = 0x2ce980u;

label_2ce980:
    // 0x2ce980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ce980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ce984:
    // 0x2ce984: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ce984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ce988:
    // 0x2ce988: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ce988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2ce98c:
    // 0x2ce98c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ce98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ce990:
    // 0x2ce990: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_2ce994:
    if (ctx->pc == 0x2CE994u) {
        ctx->pc = 0x2CE994u;
            // 0x2ce994: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CE998u;
        goto label_2ce998;
    }
    ctx->pc = 0x2CE990u;
    {
        const bool branch_taken_0x2ce990 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CE994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE990u;
            // 0x2ce994: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce990) {
            ctx->pc = 0x2CE9A0u;
            goto label_2ce9a0;
        }
    }
    ctx->pc = 0x2CE998u;
label_2ce998:
    // 0x2ce998: 0x10000013  b           . + 4 + (0x13 << 2)
label_2ce99c:
    if (ctx->pc == 0x2CE99Cu) {
        ctx->pc = 0x2CE99Cu;
            // 0x2ce99c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CE9A0u;
        goto label_2ce9a0;
    }
    ctx->pc = 0x2CE998u;
    {
        const bool branch_taken_0x2ce998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE998u;
            // 0x2ce99c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce998) {
            ctx->pc = 0x2CE9E8u;
            goto label_2ce9e8;
        }
    }
    ctx->pc = 0x2CE9A0u;
label_2ce9a0:
    // 0x2ce9a0: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2ce9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2ce9a4:
    // 0x2ce9a4: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2ce9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2ce9a8:
    // 0x2ce9a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2ce9a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ce9ac:
    // 0x2ce9ac: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2ce9acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2ce9b0:
    // 0x2ce9b0: 0x320f809  jalr        $t9
label_2ce9b4:
    if (ctx->pc == 0x2CE9B4u) {
        ctx->pc = 0x2CE9B4u;
            // 0x2ce9b4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2CE9B8u;
        goto label_2ce9b8;
    }
    ctx->pc = 0x2CE9B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CE9B8u);
        ctx->pc = 0x2CE9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE9B0u;
            // 0x2ce9b4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CE9B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CE9B8u; }
            if (ctx->pc != 0x2CE9B8u) { return; }
        }
        }
    }
    ctx->pc = 0x2CE9B8u;
label_2ce9b8:
    // 0x2ce9b8: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x2ce9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ce9bc:
    // 0x2ce9bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ce9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ce9c0:
    // 0x2ce9c0: 0xc0b37b4  jal         func_2CDED0
label_2ce9c4:
    if (ctx->pc == 0x2CE9C4u) {
        ctx->pc = 0x2CE9C4u;
            // 0x2ce9c4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2CE9C8u;
        goto label_2ce9c8;
    }
    ctx->pc = 0x2CE9C0u;
    SET_GPR_U32(ctx, 31, 0x2CE9C8u);
    ctx->pc = 0x2CE9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE9C0u;
            // 0x2ce9c4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDED0u;
    if (runtime->hasFunction(0x2CDED0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE9C8u; }
        if (ctx->pc != 0x2CE9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2cded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE9C8u; }
        if (ctx->pc != 0x2CE9C8u) { return; }
    }
    ctx->pc = 0x2CE9C8u;
label_2ce9c8:
    // 0x2ce9c8: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x2ce9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ce9cc:
    // 0x2ce9cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ce9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ce9d0:
    // 0x2ce9d0: 0xc0b37b4  jal         func_2CDED0
label_2ce9d4:
    if (ctx->pc == 0x2CE9D4u) {
        ctx->pc = 0x2CE9D4u;
            // 0x2ce9d4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2CE9D8u;
        goto label_2ce9d8;
    }
    ctx->pc = 0x2CE9D0u;
    SET_GPR_U32(ctx, 31, 0x2CE9D8u);
    ctx->pc = 0x2CE9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE9D0u;
            // 0x2ce9d4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDED0u;
    if (runtime->hasFunction(0x2CDED0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE9D8u; }
        if (ctx->pc != 0x2CE9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2cded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE9D8u; }
        if (ctx->pc != 0x2CE9D8u) { return; }
    }
    ctx->pc = 0x2CE9D8u;
label_2ce9d8:
    // 0x2ce9d8: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x2ce9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ce9dc:
    // 0x2ce9dc: 0xc0b37b4  jal         func_2CDED0
label_2ce9e0:
    if (ctx->pc == 0x2CE9E0u) {
        ctx->pc = 0x2CE9E0u;
            // 0x2ce9e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CE9E4u;
        goto label_2ce9e4;
    }
    ctx->pc = 0x2CE9DCu;
    SET_GPR_U32(ctx, 31, 0x2CE9E4u);
    ctx->pc = 0x2CE9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE9DCu;
            // 0x2ce9e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDED0u;
    if (runtime->hasFunction(0x2CDED0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE9E4u; }
        if (ctx->pc != 0x2CE9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2cded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE9E4u; }
        if (ctx->pc != 0x2CE9E4u) { return; }
    }
    ctx->pc = 0x2CE9E4u;
label_2ce9e4:
    // 0x2ce9e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce9e8:
    // 0x2ce9e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ce9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ce9ec:
    // 0x2ce9ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ce9ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ce9f0:
    // 0x2ce9f0: 0x3e00008  jr          $ra
label_2ce9f4:
    if (ctx->pc == 0x2CE9F4u) {
        ctx->pc = 0x2CE9F4u;
            // 0x2ce9f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2CE9F8u;
        goto label_fallthrough_0x2ce9f0;
    }
    ctx->pc = 0x2CE9F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE9F0u;
            // 0x2ce9f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2ce9f0:
    ctx->pc = 0x2CE9F8u;
}
