#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_CAMERA_POS__FP12RS_STACKDATAi
// Address: 0x26e460 - 0x26e4e0
void ps2__GET_CAMERA_POS__FP12RS_STACKDATAi_0x26e460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_CAMERA_POS__FP12RS_STACKDATAi_0x26e460");
#endif

    switch (ctx->pc) {
        case 0x26e488u: goto label_26e488;
        case 0x26e4a0u: goto label_26e4a0;
        case 0x26e4b0u: goto label_26e4b0;
        case 0x26e4c0u: goto label_26e4c0;
        case 0x26e4ccu: goto label_26e4cc;
        default: break;
    }

    ctx->pc = 0x26e460u;

    // 0x26e460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26e460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26e464: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x26e464u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26e468: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26e468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26e46c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26e46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26e470: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E470u;
    {
        const bool branch_taken_0x26e470 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E470u;
            // 0x26e474: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e470) {
            ctx->pc = 0x26E480u;
            goto label_26e480;
        }
    }
    ctx->pc = 0x26E478u;
    // 0x26e478: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x26E478u;
    {
        const bool branch_taken_0x26e478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E478u;
            // 0x26e47c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e478) {
            ctx->pc = 0x26E4D0u;
            goto label_26e4d0;
        }
    }
    ctx->pc = 0x26E480u;
label_26e480:
    // 0x26e480: 0xc09b8c8  jal         func_26E320
    ctx->pc = 0x26E480u;
    SET_GPR_U32(ctx, 31, 0x26E488u);
    ctx->pc = 0x26E320u;
    if (runtime->hasFunction(0x26E320u)) {
        auto targetFn = runtime->lookupFunction(0x26E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E488u; }
        if (ctx->pc != 0x26E488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__Fv_0x26e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E488u; }
        if (ctx->pc != 0x26E488u) { return; }
    }
    ctx->pc = 0x26E488u;
label_26e488:
    // 0x26e488: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E488u;
    {
        const bool branch_taken_0x26e488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E488u;
            // 0x26e48c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e488) {
            ctx->pc = 0x26E498u;
            goto label_26e498;
        }
    }
    ctx->pc = 0x26E490u;
    // 0x26e490: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x26E490u;
    {
        const bool branch_taken_0x26e490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E490u;
            // 0x26e494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e490) {
            ctx->pc = 0x26E4D0u;
            goto label_26e4d0;
        }
    }
    ctx->pc = 0x26E498u;
label_26e498:
    // 0x26e498: 0xc04c574  jal         func_1315D0
    ctx->pc = 0x26E498u;
    SET_GPR_U32(ctx, 31, 0x26E4A0u);
    ctx->pc = 0x26E49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E498u;
            // 0x26e49c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E4A0u; }
        if (ctx->pc != 0x26E4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E4A0u; }
        if (ctx->pc != 0x26E4A0u) { return; }
    }
    ctx->pc = 0x26E4A0u;
label_26e4a0:
    // 0x26e4a0: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x26e4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26e4a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e4a8: 0xc097e54  jal         func_25F950
    ctx->pc = 0x26E4A8u;
    SET_GPR_U32(ctx, 31, 0x26E4B0u);
    ctx->pc = 0x26E4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E4A8u;
            // 0x26e4ac: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E4B0u; }
        if (ctx->pc != 0x26E4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E4B0u; }
        if (ctx->pc != 0x26E4B0u) { return; }
    }
    ctx->pc = 0x26E4B0u;
label_26e4b0:
    // 0x26e4b0: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x26e4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26e4b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e4b8: 0xc097e54  jal         func_25F950
    ctx->pc = 0x26E4B8u;
    SET_GPR_U32(ctx, 31, 0x26E4C0u);
    ctx->pc = 0x26E4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E4B8u;
            // 0x26e4bc: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E4C0u; }
        if (ctx->pc != 0x26E4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E4C0u; }
        if (ctx->pc != 0x26E4C0u) { return; }
    }
    ctx->pc = 0x26E4C0u;
label_26e4c0:
    // 0x26e4c0: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x26e4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26e4c4: 0xc097e54  jal         func_25F950
    ctx->pc = 0x26E4C4u;
    SET_GPR_U32(ctx, 31, 0x26E4CCu);
    ctx->pc = 0x26E4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E4C4u;
            // 0x26e4c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E4CCu; }
        if (ctx->pc != 0x26E4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E4CCu; }
        if (ctx->pc != 0x26E4CCu) { return; }
    }
    ctx->pc = 0x26E4CCu;
label_26e4cc:
    // 0x26e4cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26e4d0:
    // 0x26e4d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26e4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e4d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26e4d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x26E4D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E4D8u;
            // 0x26e4dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26E4E0u;
}
