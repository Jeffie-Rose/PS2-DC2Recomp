#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetOuterRectXYFromFukidashiPos__6ClsMesFP4RECT
// Address: 0x15b0e0 - 0x15b138
void SetOuterRectXYFromFukidashiPos__6ClsMesFP4RECT_0x15b0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetOuterRectXYFromFukidashiPos__6ClsMesFP4RECT_0x15b0e0");
#endif

    switch (ctx->pc) {
        case 0x15b12cu: goto label_15b12c;
        default: break;
    }

    ctx->pc = 0x15b0e0u;

    // 0x15b0e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15b0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15b0e4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x15b0e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b0e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15b0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15b0ec: 0x8c83014c  lw          $v1, 0x14C($a0)
    ctx->pc = 0x15b0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 332)));
    // 0x15b0f0: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x15B0F0u;
    {
        const bool branch_taken_0x15b0f0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x15B0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B0F0u;
            // 0x15b0f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b0f0) {
            ctx->pc = 0x15B12Cu;
            goto label_15b12c;
        }
    }
    ctx->pc = 0x15B0F8u;
    // 0x15b0f8: 0x240201e0  addiu       $v0, $zero, 0x1E0
    ctx->pc = 0x15b0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x15b0fc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x15b0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15b100: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x15b100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x15b104: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15b104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15b108: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x15b108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x15b10c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x15b10cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x15b110: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x15b110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x15b114: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x15b114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x15b118: 0x8ca7014c  lw          $a3, 0x14C($a1)
    ctx->pc = 0x15b118u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 332)));
    // 0x15b11c: 0x8d06000c  lw          $a2, 0xC($t0)
    ctx->pc = 0x15b11cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x15b120: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x15b120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x15b124: 0xc056558  jal         func_159560
    ctx->pc = 0x15B124u;
    SET_GPR_U32(ctx, 31, 0x15B12Cu);
    ctx->pc = 0x15B128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B124u;
            // 0x15b128: 0x25090004  addiu       $t1, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159560u;
    if (runtime->hasFunction(0x159560u)) {
        auto targetFn = runtime->lookupFunction(0x159560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B12Cu; }
        if (ctx->pc != 0x15B12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos_AbsPosSet__F4RECTiiiPiPi_0x159560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B12Cu; }
        if (ctx->pc != 0x15B12Cu) { return; }
    }
    ctx->pc = 0x15B12Cu;
label_15b12c:
    // 0x15b12c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15b12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b130: 0x3e00008  jr          $ra
    ctx->pc = 0x15B130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B130u;
            // 0x15b134: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15B138u;
}
