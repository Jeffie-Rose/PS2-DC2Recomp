#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PatchIsNeeded
// Address: 0x118de8 - 0x118e50
void PatchIsNeeded_0x118de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PatchIsNeeded_0x118de8");
#endif

    switch (ctx->pc) {
        case 0x118dfcu: goto label_118dfc;
        case 0x118e20u: goto label_118e20;
        case 0x118e28u: goto label_118e28;
        case 0x118e30u: goto label_118e30;
        default: break;
    }

    ctx->pc = 0x118de8u;

    // 0x118de8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x118de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x118dec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x118decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x118df0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x118df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x118df4: 0xc044064  jal         func_110190
    ctx->pc = 0x118DF4u;
    SET_GPR_U32(ctx, 31, 0x118DFCu);
    ctx->pc = 0x118DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118DF4u;
            // 0x118df8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110190u;
    if (runtime->hasFunction(0x110190u)) {
        auto targetFn = runtime->lookupFunction(0x110190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118DFCu; }
        if (ctx->pc != 0x118DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetOsdConfigParam_0x110190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118DFCu; }
        if (ctx->pc != 0x118DFCu) { return; }
    }
    ctx->pc = 0x118DFCu;
label_118dfc:
    // 0x118dfc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x118dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118e00: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x118e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x118e04: 0x34421fff  ori         $v0, $v0, 0x1FFF
    ctx->pc = 0x118e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8191);
    // 0x118e08: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x118e08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x118e0c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x118e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x118e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118e14: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x118e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x118e18: 0xc044060  jal         func_110180
    ctx->pc = 0x118E18u;
    SET_GPR_U32(ctx, 31, 0x118E20u);
    ctx->pc = 0x118E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118E18u;
            // 0x118e1c: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110180u;
    if (runtime->hasFunction(0x110180u)) {
        auto targetFn = runtime->lookupFunction(0x110180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118E20u; }
        if (ctx->pc != 0x118E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetOsdConfigParam_0x110180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118E20u; }
        if (ctx->pc != 0x118E20u) { return; }
    }
    ctx->pc = 0x118E20u;
label_118e20:
    // 0x118e20: 0xc044064  jal         func_110190
    ctx->pc = 0x118E20u;
    SET_GPR_U32(ctx, 31, 0x118E28u);
    ctx->pc = 0x118E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118E20u;
            // 0x118e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110190u;
    if (runtime->hasFunction(0x110190u)) {
        auto targetFn = runtime->lookupFunction(0x110190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118E28u; }
        if (ctx->pc != 0x118E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetOsdConfigParam_0x110190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118E28u; }
        if (ctx->pc != 0x118E28u) { return; }
    }
    ctx->pc = 0x118E28u;
label_118e28:
    // 0x118e28: 0xc044060  jal         func_110180
    ctx->pc = 0x118E28u;
    SET_GPR_U32(ctx, 31, 0x118E30u);
    ctx->pc = 0x118E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118E28u;
            // 0x118e2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110180u;
    if (runtime->hasFunction(0x110180u)) {
        auto targetFn = runtime->lookupFunction(0x110180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118E30u; }
        if (ctx->pc != 0x118E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetOsdConfigParam_0x110180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118E30u; }
        if (ctx->pc != 0x118E30u) { return; }
    }
    ctx->pc = 0x118E30u;
label_118e30:
    // 0x118e30: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x118e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x118e34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x118e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118e38: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x118e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x118e3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x118e3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118e40: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x118e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x118e44: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x118e44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x118e48: 0x3e00008  jr          $ra
    ctx->pc = 0x118E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118E48u;
            // 0x118e4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x118E50u;
}
