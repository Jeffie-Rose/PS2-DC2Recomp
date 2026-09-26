#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuReloadTexture__FRii
// Address: 0x221e30 - 0x221e68
void MenuReloadTexture__FRii_0x221e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuReloadTexture__FRii_0x221e30");
#endif

    switch (ctx->pc) {
        case 0x221e5cu: goto label_221e5c;
        default: break;
    }

    ctx->pc = 0x221e30u;

    // 0x221e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x221e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x221e34: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x221e34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x221e3c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x221e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x221e40: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x221e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x221e44: 0x10650005  beq         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x221E44u;
    {
        const bool branch_taken_0x221e44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x221E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221E44u;
            // 0x221e48: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e44) {
            ctx->pc = 0x221E5Cu;
            goto label_221e5c;
        }
    }
    ctx->pc = 0x221E4Cu;
    // 0x221e4c: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x221e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x221e50: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x221e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x221e54: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x221E54u;
    SET_GPR_U32(ctx, 31, 0x221E5Cu);
    ctx->pc = 0x221E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221E54u;
            // 0x221e58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221E5Cu; }
        if (ctx->pc != 0x221E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221E5Cu; }
        if (ctx->pc != 0x221E5Cu) { return; }
    }
    ctx->pc = 0x221E5Cu;
label_221e5c:
    // 0x221e5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221e60: 0x3e00008  jr          $ra
    ctx->pc = 0x221E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221E60u;
            // 0x221e64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x221E68u;
}
