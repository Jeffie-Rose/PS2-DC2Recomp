#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _request_rdata
// Address: 0x112df8 - 0x112e58
void _request_rdata_0x112df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_request_rdata_0x112df8");
#endif

    switch (ctx->pc) {
        case 0x112e10u: goto label_112e10;
        default: break;
    }

    ctx->pc = 0x112df8u;

    // 0x112df8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x112df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x112dfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x112dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x112e00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x112e00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112e04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x112e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x112e08: 0xc044b34  jal         func_112CD0
    ctx->pc = 0x112E08u;
    SET_GPR_U32(ctx, 31, 0x112E10u);
    ctx->pc = 0x112E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112E08u;
            // 0x112e0c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112CD0u;
    if (runtime->hasFunction(0x112CD0u)) {
        auto targetFn = runtime->lookupFunction(0x112CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112E10u; }
        if (ctx->pc != 0x112E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceRpcGetFPacket_0x112cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112E10u; }
        if (ctx->pc != 0x112E10u) { return; }
    }
    ctx->pc = 0x112E10u;
label_112e10:
    // 0x112e10: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x112e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x112e14: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x112e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x112e18: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x112e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x112e1c: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x112e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x112e20: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x112e20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x112e24: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x112e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x112e28: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x112e28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x112e2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x112e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112e30: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x112e30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x112e34: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x112e34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x112e38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x112e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112e3c: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x112e3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x112e40: 0x8e090028  lw          $t1, 0x28($s0)
    ctx->pc = 0x112e40u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x112e44: 0x8e070020  lw          $a3, 0x20($s0)
    ctx->pc = 0x112e44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x112e48: 0x8e080024  lw          $t0, 0x24($s0)
    ctx->pc = 0x112e48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x112e4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x112e4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112e50: 0x8044a0a  j           func_112828
    ctx->pc = 0x112E50u;
    ctx->pc = 0x112E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112E50u;
            // 0x112e54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112828u;
    if (runtime->hasFunction(0x112828u)) {
        auto targetFn = runtime->lookupFunction(0x112828u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        isceSifSendCmd_0x112828(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x112E58u;
}
