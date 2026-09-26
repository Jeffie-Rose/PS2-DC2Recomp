#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: setD4_CHCR
// Address: 0x10fa10 - 0x10fa74
void setD4_CHCR_0x10fa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setD4_CHCR_0x10fa10");
#endif

    switch (ctx->pc) {
        case 0x10fa24u: goto label_10fa24;
        default: break;
    }

    ctx->pc = 0x10fa10u;

    // 0x10fa10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10fa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10fa14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10fa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10fa18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10fa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10fa1c: 0xc0462f8  jal         func_118BE0
    ctx->pc = 0x10FA1Cu;
    SET_GPR_U32(ctx, 31, 0x10FA24u);
    ctx->pc = 0x10FA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10FA1Cu;
            // 0x10fa20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118BE0u;
    if (runtime->hasFunction(0x118BE0u)) {
        auto targetFn = runtime->lookupFunction(0x118BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FA24u; }
        if (ctx->pc != 0x10FA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x118be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FA24u; }
        if (ctx->pc != 0x10FA24u) { return; }
    }
    ctx->pc = 0x10FA24u;
label_10fa24:
    // 0x10fa24: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10fa24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10fa28: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x10fa28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x10fa2c: 0x34a5f520  ori         $a1, $a1, 0xF520
    ctx->pc = 0x10fa2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62752);
    // 0x10fa30: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10fa30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10fa34: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10fa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10fa38: 0x34c6f590  ori         $a2, $a2, 0xF590
    ctx->pc = 0x10fa38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62864);
    // 0x10fa3c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10fa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10fa40: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x10fa40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x10fa44: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x10fa44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x10fa48: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x10fa48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x10fa4c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x10fa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x10fa50: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x10fa50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x10fa54: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x10fa54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x10fa58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10fa58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10fa5c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10fa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10fa60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10fa60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fa64: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x10fa64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x10fa68: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x10fa68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x10fa6c: 0x804630a  j           func_118C28
    ctx->pc = 0x10FA6Cu;
    ctx->pc = 0x10FA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10FA6Cu;
            // 0x10fa70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118C28u;
    if (runtime->hasFunction(0x118C28u)) {
        auto targetFn = runtime->lookupFunction(0x118C28u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        EIntr_0x118c28(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10FA74u;
}
