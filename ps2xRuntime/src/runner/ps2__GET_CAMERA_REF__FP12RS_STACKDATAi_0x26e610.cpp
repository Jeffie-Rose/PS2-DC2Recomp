#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_CAMERA_REF__FP12RS_STACKDATAi
// Address: 0x26e610 - 0x26e690
void ps2__GET_CAMERA_REF__FP12RS_STACKDATAi_0x26e610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_CAMERA_REF__FP12RS_STACKDATAi_0x26e610");
#endif

    switch (ctx->pc) {
        case 0x26e638u: goto label_26e638;
        case 0x26e650u: goto label_26e650;
        case 0x26e660u: goto label_26e660;
        case 0x26e670u: goto label_26e670;
        case 0x26e67cu: goto label_26e67c;
        default: break;
    }

    ctx->pc = 0x26e610u;

    // 0x26e610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26e610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26e614: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x26e614u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26e618: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26e618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26e61c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26e61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26e620: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E620u;
    {
        const bool branch_taken_0x26e620 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E620u;
            // 0x26e624: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e620) {
            ctx->pc = 0x26E630u;
            goto label_26e630;
        }
    }
    ctx->pc = 0x26E628u;
    // 0x26e628: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x26E628u;
    {
        const bool branch_taken_0x26e628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E628u;
            // 0x26e62c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e628) {
            ctx->pc = 0x26E680u;
            goto label_26e680;
        }
    }
    ctx->pc = 0x26E630u;
label_26e630:
    // 0x26e630: 0xc09b8c8  jal         func_26E320
    ctx->pc = 0x26E630u;
    SET_GPR_U32(ctx, 31, 0x26E638u);
    ctx->pc = 0x26E320u;
    if (runtime->hasFunction(0x26E320u)) {
        auto targetFn = runtime->lookupFunction(0x26E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E638u; }
        if (ctx->pc != 0x26E638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__Fv_0x26e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E638u; }
        if (ctx->pc != 0x26E638u) { return; }
    }
    ctx->pc = 0x26E638u;
label_26e638:
    // 0x26e638: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E638u;
    {
        const bool branch_taken_0x26e638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E638u;
            // 0x26e63c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e638) {
            ctx->pc = 0x26E648u;
            goto label_26e648;
        }
    }
    ctx->pc = 0x26E640u;
    // 0x26e640: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x26E640u;
    {
        const bool branch_taken_0x26e640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E640u;
            // 0x26e644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e640) {
            ctx->pc = 0x26E680u;
            goto label_26e680;
        }
    }
    ctx->pc = 0x26E648u;
label_26e648:
    // 0x26e648: 0xc04c578  jal         func_1315E0
    ctx->pc = 0x26E648u;
    SET_GPR_U32(ctx, 31, 0x26E650u);
    ctx->pc = 0x26E64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E648u;
            // 0x26e64c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315E0u;
    if (runtime->hasFunction(0x1315E0u)) {
        auto targetFn = runtime->lookupFunction(0x1315E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E650u; }
        if (ctx->pc != 0x26E650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRef__9mgCCameraFPf_0x1315e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E650u; }
        if (ctx->pc != 0x26E650u) { return; }
    }
    ctx->pc = 0x26E650u;
label_26e650:
    // 0x26e650: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x26e650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26e654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e658: 0xc097e54  jal         func_25F950
    ctx->pc = 0x26E658u;
    SET_GPR_U32(ctx, 31, 0x26E660u);
    ctx->pc = 0x26E65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E658u;
            // 0x26e65c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E660u; }
        if (ctx->pc != 0x26E660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E660u; }
        if (ctx->pc != 0x26E660u) { return; }
    }
    ctx->pc = 0x26E660u;
label_26e660:
    // 0x26e660: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x26e660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26e664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e668: 0xc097e54  jal         func_25F950
    ctx->pc = 0x26E668u;
    SET_GPR_U32(ctx, 31, 0x26E670u);
    ctx->pc = 0x26E66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E668u;
            // 0x26e66c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E670u; }
        if (ctx->pc != 0x26E670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E670u; }
        if (ctx->pc != 0x26E670u) { return; }
    }
    ctx->pc = 0x26E670u;
label_26e670:
    // 0x26e670: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x26e670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26e674: 0xc097e54  jal         func_25F950
    ctx->pc = 0x26E674u;
    SET_GPR_U32(ctx, 31, 0x26E67Cu);
    ctx->pc = 0x26E678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E674u;
            // 0x26e678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E67Cu; }
        if (ctx->pc != 0x26E67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E67Cu; }
        if (ctx->pc != 0x26E67Cu) { return; }
    }
    ctx->pc = 0x26E67Cu;
label_26e67c:
    // 0x26e67c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26e680:
    // 0x26e680: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26e680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e684: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26e684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e688: 0x3e00008  jr          $ra
    ctx->pc = 0x26E688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E688u;
            // 0x26e68c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26E690u;
}
