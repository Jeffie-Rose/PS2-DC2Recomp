#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TitleMCCheckDraw__Fv
// Address: 0x2a2fd0 - 0x2a3010
void TitleMCCheckDraw__Fv_0x2a2fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TitleMCCheckDraw__Fv_0x2a2fd0");
#endif

    switch (ctx->pc) {
        case 0x2a2ff4u: goto label_2a2ff4;
        case 0x2a2ffcu: goto label_2a2ffc;
        case 0x2a3004u: goto label_2a3004;
        default: break;
    }

    ctx->pc = 0x2a2fd0u;

    // 0x2a2fd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a2fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a2fd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a2fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a2fd8: 0x8f8399a4  lw          $v1, -0x665C($gp)
    ctx->pc = 0x2a2fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941092)));
    // 0x2a2fdc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A2FDCu;
    {
        const bool branch_taken_0x2a2fdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2FDCu;
            // 0x2a2fe0: 0x3c040038  lui         $a0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2fdc) {
            ctx->pc = 0x2A3004u;
            goto label_2a3004;
        }
    }
    ctx->pc = 0x2A2FE4u;
    // 0x2a2fe4: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x2a2fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2a2fe8: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2a2fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2a2fec: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2A2FECu;
    SET_GPR_U32(ctx, 31, 0x2A2FF4u);
    ctx->pc = 0x2A2FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2FECu;
            // 0x2a2ff0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2FF4u; }
        if (ctx->pc != 0x2A2FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2FF4u; }
        if (ctx->pc != 0x2A2FF4u) { return; }
    }
    ctx->pc = 0x2A2FF4u;
label_2a2ff4:
    // 0x2a2ff4: 0xc054ee8  jal         func_153BA0
    ctx->pc = 0x2A2FF4u;
    SET_GPR_U32(ctx, 31, 0x2A2FFCu);
    ctx->pc = 0x2A2FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2FF4u;
            // 0x2a2ff8: 0x8f8499a4  lw          $a0, -0x665C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941092)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153BA0u;
    if (runtime->hasFunction(0x153BA0u)) {
        auto targetFn = runtime->lookupFunction(0x153BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2FFCu; }
        if (ctx->pc != 0x2A2FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6ClsMesFv_0x153ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2FFCu; }
        if (ctx->pc != 0x2A2FFCu) { return; }
    }
    ctx->pc = 0x2A2FFCu;
label_2a2ffc:
    // 0x2a2ffc: 0xc056cb0  jal         func_15B2C0
    ctx->pc = 0x2A2FFCu;
    SET_GPR_U32(ctx, 31, 0x2A3004u);
    ctx->pc = 0x2A3000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2FFCu;
            // 0x2a3000: 0x8f8499a4  lw          $a0, -0x665C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941092)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B2C0u;
    if (runtime->hasFunction(0x15B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x15B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3004u; }
        if (ctx->pc != 0x2A3004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMesWin__6ClsMesFv_0x15b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3004u; }
        if (ctx->pc != 0x2A3004u) { return; }
    }
    ctx->pc = 0x2A3004u;
label_2a3004:
    // 0x2a3004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a3004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3008: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A300Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3008u;
            // 0x2a300c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A3010u;
}
