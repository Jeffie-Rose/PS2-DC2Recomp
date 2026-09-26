#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuReloadCLUT__Fi
// Address: 0x221e70 - 0x221ec0
void MenuReloadCLUT__Fi_0x221e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuReloadCLUT__Fi_0x221e70");
#endif

    switch (ctx->pc) {
        case 0x221eb4u: goto label_221eb4;
        default: break;
    }

    ctx->pc = 0x221e70u;

    // 0x221e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x221e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x221e74: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x221e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x221e78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x221e7c: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x221e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x221e80: 0xdf849388  ld          $a0, -0x6C78($gp)
    ctx->pc = 0x221e80u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294939528)));
    // 0x221e84: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x221e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x221e88: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x221e88u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x221e8c: 0x8f859b7c  lw          $a1, -0x6484($gp)
    ctx->pc = 0x221e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941564)));
    // 0x221e90: 0x8f849b78  lw          $a0, -0x6488($gp)
    ctx->pc = 0x221e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941560)));
    // 0x221e94: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x221e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x221e98: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x221e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x221e9c: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x221e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x221ea0: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x221EA0u;
    {
        const bool branch_taken_0x221ea0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x221EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221EA0u;
            // 0x221ea4: 0x3c040038  lui         $a0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ea0) {
            ctx->pc = 0x221EB4u;
            goto label_221eb4;
        }
    }
    ctx->pc = 0x221EA8u;
    // 0x221ea8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x221ea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221eac: 0xc04bba8  jal         func_12EEA0
    ctx->pc = 0x221EACu;
    SET_GPR_U32(ctx, 31, 0x221EB4u);
    ctx->pc = 0x221EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221EACu;
            // 0x221eb0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EEA0u;
    if (runtime->hasFunction(0x12EEA0u)) {
        auto targetFn = runtime->lookupFunction(0x12EEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221EB4u; }
        if (ctx->pc != 0x221EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadCLUT__17mgCTextureManagerFP10mgCTextureP13sceVif1Packet_0x12eea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221EB4u; }
        if (ctx->pc != 0x221EB4u) { return; }
    }
    ctx->pc = 0x221EB4u;
label_221eb4:
    // 0x221eb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x221EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221EB8u;
            // 0x221ebc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x221EC0u;
}
