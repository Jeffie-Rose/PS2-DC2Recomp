#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadMapScript__FPc
// Address: 0x2df370 - 0x2df3f4
void LoadMapScript__FPc_0x2df370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadMapScript__FPc_0x2df370");
#endif

    switch (ctx->pc) {
        case 0x2df38cu: goto label_2df38c;
        case 0x2df3b4u: goto label_2df3b4;
        case 0x2df3c0u: goto label_2df3c0;
        case 0x2df3d0u: goto label_2df3d0;
        case 0x2df3d8u: goto label_2df3d8;
        case 0x2df3e8u: goto label_2df3e8;
        default: break;
    }

    ctx->pc = 0x2df370u;

    // 0x2df370: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2df370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2df374: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2df374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df378: 0x3c0701f6  lui         $a3, 0x1F6
    ctx->pc = 0x2df378u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)502 << 16));
    // 0x2df37c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df380: 0x24e78d90  addiu       $a3, $a3, -0x7270
    ctx->pc = 0x2df380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294938000));
    // 0x2df384: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2df384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2df388: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2df388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2df38c:
    // 0x2df38c: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x2df38cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2df390: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2df390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2df394: 0x78e20010  lq          $v0, 0x10($a3)
    ctx->pc = 0x2df394u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2df398: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x2df398u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x2df39c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x2df39cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2df3a0: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x2df3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x2df3a4: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2DF3A4u;
    {
        const bool branch_taken_0x2df3a4 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2DF3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF3A4u;
            // 0x2df3a8: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df3a4) {
            ctx->pc = 0x2DF38Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2df38c;
        }
    }
    ctx->pc = 0x2DF3ACu;
    // 0x2df3ac: 0xc0b497c  jal         func_2D25F0
    ctx->pc = 0x2DF3ACu;
    SET_GPR_U32(ctx, 31, 0x2DF3B4u);
    ctx->pc = 0x2DF3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF3ACu;
            // 0x2df3b0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D25F0u;
    if (runtime->hasFunction(0x2D25F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D25F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF3B4u; }
        if (ctx->pc != 0x2DF3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapPath__FPcPc_0x2d25f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF3B4u; }
        if (ctx->pc != 0x2DF3B4u) { return; }
    }
    ctx->pc = 0x2DF3B4u;
label_2df3b4:
    // 0x2df3b4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2df3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2df3b8: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2DF3B8u;
    SET_GPR_U32(ctx, 31, 0x2DF3C0u);
    ctx->pc = 0x2DF3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF3B8u;
            // 0x2df3bc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF3C0u; }
        if (ctx->pc != 0x2DF3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF3C0u; }
        if (ctx->pc != 0x2DF3C0u) { return; }
    }
    ctx->pc = 0x2DF3C0u;
label_2df3c0:
    // 0x2df3c0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2df3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2df3c4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2df3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2df3c8: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2DF3C8u;
    SET_GPR_U32(ctx, 31, 0x2DF3D0u);
    ctx->pc = 0x2DF3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF3C8u;
            // 0x2df3cc: 0x24a50f68  addiu       $a1, $a1, 0xF68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF3D0u; }
        if (ctx->pc != 0x2DF3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF3D0u; }
        if (ctx->pc != 0x2DF3D0u) { return; }
    }
    ctx->pc = 0x2DF3D0u;
label_2df3d0:
    // 0x2df3d0: 0xc0b7d0c  jal         func_2DF430
    ctx->pc = 0x2DF3D0u;
    SET_GPR_U32(ctx, 31, 0x2DF3D8u);
    ctx->pc = 0x2DF3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF3D0u;
            // 0x2df3d4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF430u;
    if (runtime->hasFunction(0x2DF430u)) {
        auto targetFn = runtime->lookupFunction(0x2DF430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF3D8u; }
        if (ctx->pc != 0x2DF3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadScript__FPc_0x2df430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF3D8u; }
        if (ctx->pc != 0x2DF3D8u) { return; }
    }
    ctx->pc = 0x2DF3D8u;
label_2df3d8:
    // 0x2df3d8: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2df3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x2df3dc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2df3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2df3e0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DF3E0u;
    SET_GPR_U32(ctx, 31, 0x2DF3E8u);
    ctx->pc = 0x2DF3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF3E0u;
            // 0x2df3e4: 0x24848d10  addiu       $a0, $a0, -0x72F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF3E8u; }
        if (ctx->pc != 0x2DF3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF3E8u; }
        if (ctx->pc != 0x2DF3E8u) { return; }
    }
    ctx->pc = 0x2DF3E8u;
label_2df3e8:
    // 0x2df3e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF3ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF3ECu;
            // 0x2df3f0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DF3F4u;
}
