#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: setD3_CHCR__FUi
// Address: 0x299bf0 - 0x299c58
void setD3_CHCR__FUi_0x299bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setD3_CHCR__FUi_0x299bf0");
#endif

    switch (ctx->pc) {
        case 0x299c04u: goto label_299c04;
        case 0x299c48u: goto label_299c48;
        default: break;
    }

    ctx->pc = 0x299bf0u;

    // 0x299bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x299bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x299bf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x299bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x299bf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x299bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x299bfc: 0xc0462f8  jal         func_118BE0
    ctx->pc = 0x299BFCu;
    SET_GPR_U32(ctx, 31, 0x299C04u);
    ctx->pc = 0x299C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299BFCu;
            // 0x299c00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118BE0u;
    if (runtime->hasFunction(0x118BE0u)) {
        auto targetFn = runtime->lookupFunction(0x118BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299C04u; }
        if (ctx->pc != 0x299C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x118be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299C04u; }
        if (ctx->pc != 0x299C04u) { return; }
    }
    ctx->pc = 0x299C04u;
label_299c04:
    // 0x299c04: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x299c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x299c08: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x299c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x299c0c: 0x3444f520  ori         $a0, $v0, 0xF520
    ctx->pc = 0x299c0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62752);
    // 0x299c10: 0x3445f590  ori         $a1, $v0, 0xF590
    ctx->pc = 0x299c10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62864);
    // 0x299c14: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x299c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x299c18: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x299c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x299c1c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x299c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x299c20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x299c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x299c24: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x299c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x299c28: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x299c28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x299c2c: 0xac30b000  sw          $s0, -0x5000($at)
    ctx->pc = 0x299c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294946816), GPR_U32(ctx, 16));
    // 0x299c30: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x299c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x299c34: 0x8c23f520  lw          $v1, -0xAE0($at)
    ctx->pc = 0x299c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964512)));
    // 0x299c38: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x299c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x299c3c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x299c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x299c40: 0xc04630a  jal         func_118C28
    ctx->pc = 0x299C40u;
    SET_GPR_U32(ctx, 31, 0x299C48u);
    ctx->pc = 0x299C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299C40u;
            // 0x299c44: 0xac22f590  sw          $v0, -0xA70($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294964624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118C28u;
    if (runtime->hasFunction(0x118C28u)) {
        auto targetFn = runtime->lookupFunction(0x118C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299C48u; }
        if (ctx->pc != 0x299C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x118c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299C48u; }
        if (ctx->pc != 0x299C48u) { return; }
    }
    ctx->pc = 0x299C48u;
label_299c48:
    // 0x299c48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x299c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299c4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x299c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299c50: 0x3e00008  jr          $ra
    ctx->pc = 0x299C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299C50u;
            // 0x299c54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x299C58u;
}
