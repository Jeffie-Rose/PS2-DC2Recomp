#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgInitVif1Packet__FP1P1i
// Address: 0x141e10 - 0x141ee4
void mgInitVif1Packet__FP1P1i_0x141e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgInitVif1Packet__FP1P1i_0x141e10");
#endif

    switch (ctx->pc) {
        case 0x141ea8u: goto label_141ea8;
        case 0x141eb8u: goto label_141eb8;
        case 0x141ec4u: goto label_141ec4;
        case 0x141ed0u: goto label_141ed0;
        default: break;
    }

    ctx->pc = 0x141e10u;

    // 0x141e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x141e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x141e14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x141e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x141e18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x141e1c: 0xaf848828  sw          $a0, -0x77D8($gp)
    ctx->pc = 0x141e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936616), GPR_U32(ctx, 4));
    // 0x141e20: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x141e20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141e24: 0xaf85882c  sw          $a1, -0x77D4($gp)
    ctx->pc = 0x141e24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936620), GPR_U32(ctx, 5));
    // 0x141e28: 0x8f828828  lw          $v0, -0x77D8($gp)
    ctx->pc = 0x141e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936616)));
    // 0x141e2c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x141E2Cu;
    {
        const bool branch_taken_0x141e2c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x141E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141E2Cu;
            // 0x141e30: 0x30440003  andi        $a0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x141e2c) {
            ctx->pc = 0x141E40u;
            goto label_141e40;
        }
    }
    ctx->pc = 0x141E34u;
    // 0x141e34: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x141E34u;
    {
        const bool branch_taken_0x141e34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x141e34) {
            ctx->pc = 0x141E40u;
            goto label_141e40;
        }
    }
    ctx->pc = 0x141E3Cu;
    // 0x141e3c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x141e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_141e40:
    // 0x141e40: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x141E40u;
    {
        const bool branch_taken_0x141e40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x141e40) {
            ctx->pc = 0x141E60u;
            goto label_141e60;
        }
    }
    ctx->pc = 0x141E48u;
    // 0x141e48: 0x8f828828  lw          $v0, -0x77D8($gp)
    ctx->pc = 0x141e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936616)));
    // 0x141e4c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x141e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x141e50: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x141e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x141e54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x141e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x141e58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x141e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x141e5c: 0xaf828828  sw          $v0, -0x77D8($gp)
    ctx->pc = 0x141e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936616), GPR_U32(ctx, 2));
label_141e60:
    // 0x141e60: 0x8f82882c  lw          $v0, -0x77D4($gp)
    ctx->pc = 0x141e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936620)));
    // 0x141e64: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x141E64u;
    {
        const bool branch_taken_0x141e64 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x141E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141E64u;
            // 0x141e68: 0x30440003  andi        $a0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x141e64) {
            ctx->pc = 0x141E78u;
            goto label_141e78;
        }
    }
    ctx->pc = 0x141E6Cu;
    // 0x141e6c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x141E6Cu;
    {
        const bool branch_taken_0x141e6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x141e6c) {
            ctx->pc = 0x141E78u;
            goto label_141e78;
        }
    }
    ctx->pc = 0x141E74u;
    // 0x141e74: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x141e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_141e78:
    // 0x141e78: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x141E78u;
    {
        const bool branch_taken_0x141e78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x141e78) {
            ctx->pc = 0x141E98u;
            goto label_141e98;
        }
    }
    ctx->pc = 0x141E80u;
    // 0x141e80: 0x8f82882c  lw          $v0, -0x77D4($gp)
    ctx->pc = 0x141e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936620)));
    // 0x141e84: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x141e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x141e88: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x141e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x141e8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x141e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x141e90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x141e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x141e94: 0xaf82882c  sw          $v0, -0x77D4($gp)
    ctx->pc = 0x141e94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936620), GPR_U32(ctx, 2));
label_141e98:
    // 0x141e98: 0x8f858828  lw          $a1, -0x77D8($gp)
    ctx->pc = 0x141e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936616)));
    // 0x141e9c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x141e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x141ea0: 0xc041ac6  jal         func_106B18
    ctx->pc = 0x141EA0u;
    SET_GPR_U32(ctx, 31, 0x141EA8u);
    ctx->pc = 0x141EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141EA0u;
            // 0x141ea4: 0x24842390  addiu       $a0, $a0, 0x2390 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106B18u;
    if (runtime->hasFunction(0x106B18u)) {
        auto targetFn = runtime->lookupFunction(0x106B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141EA8u; }
        if (ctx->pc != 0x141EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkInit_0x106b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141EA8u; }
        if (ctx->pc != 0x141EA8u) { return; }
    }
    ctx->pc = 0x141EA8u;
label_141ea8:
    // 0x141ea8: 0x8f85882c  lw          $a1, -0x77D4($gp)
    ctx->pc = 0x141ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936620)));
    // 0x141eac: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x141eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x141eb0: 0xc041ac6  jal         func_106B18
    ctx->pc = 0x141EB0u;
    SET_GPR_U32(ctx, 31, 0x141EB8u);
    ctx->pc = 0x141EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141EB0u;
            // 0x141eb4: 0x248423b0  addiu       $a0, $a0, 0x23B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106B18u;
    if (runtime->hasFunction(0x106B18u)) {
        auto targetFn = runtime->lookupFunction(0x106B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141EB8u; }
        if (ctx->pc != 0x141EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkInit_0x106b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141EB8u; }
        if (ctx->pc != 0x141EB8u) { return; }
    }
    ctx->pc = 0x141EB8u;
label_141eb8:
    // 0x141eb8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x141eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x141ebc: 0xc041aca  jal         func_106B28
    ctx->pc = 0x141EBCu;
    SET_GPR_U32(ctx, 31, 0x141EC4u);
    ctx->pc = 0x141EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141EBCu;
            // 0x141ec0: 0x24842390  addiu       $a0, $a0, 0x2390 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106B28u;
    if (runtime->hasFunction(0x106B28u)) {
        auto targetFn = runtime->lookupFunction(0x106B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141EC4u; }
        if (ctx->pc != 0x141EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkReset_0x106b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141EC4u; }
        if (ctx->pc != 0x141EC4u) { return; }
    }
    ctx->pc = 0x141EC4u;
label_141ec4:
    // 0x141ec4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x141ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x141ec8: 0xc041aca  jal         func_106B28
    ctx->pc = 0x141EC8u;
    SET_GPR_U32(ctx, 31, 0x141ED0u);
    ctx->pc = 0x141ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141EC8u;
            // 0x141ecc: 0x248423b0  addiu       $a0, $a0, 0x23B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106B28u;
    if (runtime->hasFunction(0x106B28u)) {
        auto targetFn = runtime->lookupFunction(0x106B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141ED0u; }
        if (ctx->pc != 0x141ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkReset_0x106b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141ED0u; }
        if (ctx->pc != 0x141ED0u) { return; }
    }
    ctx->pc = 0x141ED0u;
label_141ed0:
    // 0x141ed0: 0xaf908830  sw          $s0, -0x77D0($gp)
    ctx->pc = 0x141ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936624), GPR_U32(ctx, 16));
    // 0x141ed4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x141ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141ed8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141ed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141edc: 0x3e00008  jr          $ra
    ctx->pc = 0x141EDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141EDCu;
            // 0x141ee0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x141EE4u;
}
