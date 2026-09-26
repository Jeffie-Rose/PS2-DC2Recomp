#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitSeSrc__6CSceneFv
// Address: 0x2a5c50 - 0x2a5e08
void InitSeSrc__6CSceneFv_0x2a5c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitSeSrc__6CSceneFv_0x2a5c50");
#endif

    switch (ctx->pc) {
        case 0x2a5c64u: goto label_2a5c64;
        case 0x2a5c6cu: goto label_2a5c6c;
        case 0x2a5c74u: goto label_2a5c74;
        case 0x2a5c7cu: goto label_2a5c7c;
        case 0x2a5c84u: goto label_2a5c84;
        case 0x2a5c90u: goto label_2a5c90;
        case 0x2a5d7cu: goto label_2a5d7c;
        case 0x2a5d84u: goto label_2a5d84;
        case 0x2a5d8cu: goto label_2a5d8c;
        case 0x2a5df8u: goto label_2a5df8;
        default: break;
    }

    ctx->pc = 0x2a5c50u;

    // 0x2a5c50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a5c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a5c54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a5c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a5c58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a5c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a5c5c: 0xc0a9fc0  jal         func_2A7F00
    ctx->pc = 0x2A5C5Cu;
    SET_GPR_U32(ctx, 31, 0x2A5C64u);
    ctx->pc = 0x2A5C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5C5Cu;
            // 0x2a5c60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7F00u;
    if (runtime->hasFunction(0x2A7F00u)) {
        auto targetFn = runtime->lookupFunction(0x2A7F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5C64u; }
        if (ctx->pc != 0x2A5C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopSeSrc__6CSceneFv_0x2a7f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5C64u; }
        if (ctx->pc != 0x2A5C64u) { return; }
    }
    ctx->pc = 0x2A5C64u;
label_2a5c64:
    // 0x2a5c64: 0xc0635f0  jal         func_18D7C0
    ctx->pc = 0x2A5C64u;
    SET_GPR_U32(ctx, 31, 0x2A5C6Cu);
    ctx->pc = 0x2A5C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5C64u;
            // 0x2a5c68: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D7C0u;
    if (runtime->hasFunction(0x18D7C0u)) {
        auto targetFn = runtime->lookupFunction(0x18D7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5C6Cu; }
        if (ctx->pc != 0x2A5C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeAllStop__Fi_0x18d7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5C6Cu; }
        if (ctx->pc != 0x2A5C6Cu) { return; }
    }
    ctx->pc = 0x2A5C6Cu;
label_2a5c6c:
    // 0x2a5c6c: 0xc0635f0  jal         func_18D7C0
    ctx->pc = 0x2A5C6Cu;
    SET_GPR_U32(ctx, 31, 0x2A5C74u);
    ctx->pc = 0x2A5C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5C6Cu;
            // 0x2a5c70: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D7C0u;
    if (runtime->hasFunction(0x18D7C0u)) {
        auto targetFn = runtime->lookupFunction(0x18D7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5C74u; }
        if (ctx->pc != 0x2A5C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeAllStop__Fi_0x18d7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5C74u; }
        if (ctx->pc != 0x2A5C74u) { return; }
    }
    ctx->pc = 0x2A5C74u;
label_2a5c74:
    // 0x2a5c74: 0xc0637cc  jal         func_18DF30
    ctx->pc = 0x2A5C74u;
    SET_GPR_U32(ctx, 31, 0x2A5C7Cu);
    ctx->pc = 0x2A5C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5C74u;
            // 0x2a5c78: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DF30u;
    if (runtime->hasFunction(0x18DF30u)) {
        auto targetFn = runtime->lookupFunction(0x18DF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5C7Cu; }
        if (ctx->pc != 0x2A5C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndDeletePort__Fi_0x18df30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5C7Cu; }
        if (ctx->pc != 0x2A5C7Cu) { return; }
    }
    ctx->pc = 0x2A5C7Cu;
label_2a5c7c:
    // 0x2a5c7c: 0xc0637cc  jal         func_18DF30
    ctx->pc = 0x2A5C7Cu;
    SET_GPR_U32(ctx, 31, 0x2A5C84u);
    ctx->pc = 0x2A5C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5C7Cu;
            // 0x2a5c80: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DF30u;
    if (runtime->hasFunction(0x18DF30u)) {
        auto targetFn = runtime->lookupFunction(0x18DF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5C84u; }
        if (ctx->pc != 0x2A5C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndDeletePort__Fi_0x18df30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5C84u; }
        if (ctx->pc != 0x2A5C84u) { return; }
    }
    ctx->pc = 0x2A5C84u;
label_2a5c84:
    // 0x2a5c84: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2a5c84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5c88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a5c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5c8c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2a5c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a5c90:
    // 0x2a5c90: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x2a5c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2a5c94: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5c98: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2a5c98u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2a5c9c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2a5c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2a5ca0: 0xac269944  sw          $a2, -0x66BC($at)
    ctx->pc = 0x2a5ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940996), GPR_U32(ctx, 6));
    // 0x2a5ca4: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x2a5ca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2a5ca8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5cac: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2a5cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2a5cb0: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2a5cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2a5cb4: 0xac269984  sw          $a2, -0x667C($at)
    ctx->pc = 0x2a5cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941060), GPR_U32(ctx, 6));
    // 0x2a5cb8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5cbc: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2a5cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2a5cc0: 0xac269948  sw          $a2, -0x66B8($at)
    ctx->pc = 0x2a5cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941000), GPR_U32(ctx, 6));
    // 0x2a5cc4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5cc8: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2a5cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2a5ccc: 0xac269988  sw          $a2, -0x6678($at)
    ctx->pc = 0x2a5cccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941064), GPR_U32(ctx, 6));
    // 0x2a5cd0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5cd4: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2a5cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2a5cd8: 0xac26994c  sw          $a2, -0x66B4($at)
    ctx->pc = 0x2a5cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941004), GPR_U32(ctx, 6));
    // 0x2a5cdc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5ce0: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2a5ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2a5ce4: 0xac26998c  sw          $a2, -0x6674($at)
    ctx->pc = 0x2a5ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941068), GPR_U32(ctx, 6));
    // 0x2a5ce8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5cec: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2a5cecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2a5cf0: 0xac269950  sw          $a2, -0x66B0($at)
    ctx->pc = 0x2a5cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941008), GPR_U32(ctx, 6));
    // 0x2a5cf4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5cf8: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2a5cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2a5cfc: 0xac269990  sw          $a2, -0x6670($at)
    ctx->pc = 0x2a5cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941072), GPR_U32(ctx, 6));
    // 0x2a5d00: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5d04: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2a5d04u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2a5d08: 0xac269954  sw          $a2, -0x66AC($at)
    ctx->pc = 0x2a5d08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941012), GPR_U32(ctx, 6));
    // 0x2a5d0c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5d10: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2a5d10u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2a5d14: 0xac269994  sw          $a2, -0x666C($at)
    ctx->pc = 0x2a5d14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941076), GPR_U32(ctx, 6));
    // 0x2a5d18: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5d1c: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2a5d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2a5d20: 0xac269958  sw          $a2, -0x66A8($at)
    ctx->pc = 0x2a5d20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941016), GPR_U32(ctx, 6));
    // 0x2a5d24: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5d28: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2a5d28u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2a5d2c: 0xac269998  sw          $a2, -0x6668($at)
    ctx->pc = 0x2a5d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941080), GPR_U32(ctx, 6));
    // 0x2a5d30: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5d34: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2a5d34u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2a5d38: 0xac26995c  sw          $a2, -0x66A4($at)
    ctx->pc = 0x2a5d38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941020), GPR_U32(ctx, 6));
    // 0x2a5d3c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5d40: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2a5d40u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2a5d44: 0xac26999c  sw          $a2, -0x6664($at)
    ctx->pc = 0x2a5d44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941084), GPR_U32(ctx, 6));
    // 0x2a5d48: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5d4c: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2a5d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2a5d50: 0xac269960  sw          $a2, -0x66A0($at)
    ctx->pc = 0x2a5d50u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941024), GPR_U32(ctx, 6));
    // 0x2a5d54: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5d58: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2a5d58u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2a5d5c: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x2A5D5Cu;
    {
        const bool branch_taken_0x2a5d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5D5Cu;
            // 0x2a5d60: 0xac2699a0  sw          $a2, -0x6660($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941088), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5d5c) {
            ctx->pc = 0x2A5C90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a5c90;
        }
    }
    ctx->pc = 0x2A5D64u;
    // 0x2a5d64: 0x34019dd0  ori         $at, $zero, 0x9DD0
    ctx->pc = 0x2a5d64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40400);
    // 0x2a5d68: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2a5d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2a5d6c: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2a5d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5d70: 0x340199d0  ori         $at, $zero, 0x99D0
    ctx->pc = 0x2a5d70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39376);
    // 0x2a5d74: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2A5D74u;
    SET_GPR_U32(ctx, 31, 0x2A5D7Cu);
    ctx->pc = 0x2A5D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5D74u;
            // 0x2a5d78: 0x2012821  addu        $a1, $s0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5D7Cu; }
        if (ctx->pc != 0x2A5D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5D7Cu; }
        if (ctx->pc != 0x2A5D7Cu) { return; }
    }
    ctx->pc = 0x2A5D7Cu;
label_2a5d7c:
    // 0x2a5d7c: 0xc06334c  jal         func_18CD30
    ctx->pc = 0x2A5D7Cu;
    SET_GPR_U32(ctx, 31, 0x2A5D84u);
    ctx->pc = 0x2A5D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5D7Cu;
            // 0x2a5d80: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CD30u;
    if (runtime->hasFunction(0x18CD30u)) {
        auto targetFn = runtime->lookupFunction(0x18CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5D84u; }
        if (ctx->pc != 0x2A5D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndInitPort__Fi_0x18cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5D84u; }
        if (ctx->pc != 0x2A5D84u) { return; }
    }
    ctx->pc = 0x2A5D84u;
label_2a5d84:
    // 0x2a5d84: 0xc06334c  jal         func_18CD30
    ctx->pc = 0x2A5D84u;
    SET_GPR_U32(ctx, 31, 0x2A5D8Cu);
    ctx->pc = 0x2A5D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5D84u;
            // 0x2a5d88: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CD30u;
    if (runtime->hasFunction(0x18CD30u)) {
        auto targetFn = runtime->lookupFunction(0x18CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5D8Cu; }
        if (ctx->pc != 0x2A5D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndInitPort__Fi_0x18cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5D8Cu; }
        if (ctx->pc != 0x2A5D8Cu) { return; }
    }
    ctx->pc = 0x2A5D8Cu;
label_2a5d8c:
    // 0x2a5d8c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5d90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a5d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a5d94: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2a5d94u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5d98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a5d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5d9c: 0xac22a020  sw          $v0, -0x5FE0($at)
    ctx->pc = 0x2a5d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942752), GPR_U32(ctx, 2));
    // 0x2a5da0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5da4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2a5da4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5da8: 0xac20a030  sw          $zero, -0x5FD0($at)
    ctx->pc = 0x2a5da8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942768), GPR_U32(ctx, 0));
    // 0x2a5dac: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5db0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2a5db0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5db4: 0xac22a024  sw          $v0, -0x5FDC($at)
    ctx->pc = 0x2a5db4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942756), GPR_U32(ctx, 2));
    // 0x2a5db8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5dbc: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2a5dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5dc0: 0xac20a034  sw          $zero, -0x5FCC($at)
    ctx->pc = 0x2a5dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942772), GPR_U32(ctx, 0));
    // 0x2a5dc4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5dc8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2a5dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5dcc: 0xac22a028  sw          $v0, -0x5FD8($at)
    ctx->pc = 0x2a5dccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942760), GPR_U32(ctx, 2));
    // 0x2a5dd0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5dd4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2a5dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5dd8: 0xac20a038  sw          $zero, -0x5FC8($at)
    ctx->pc = 0x2a5dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942776), GPR_U32(ctx, 0));
    // 0x2a5ddc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5de0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2a5de0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5de4: 0xac22a02c  sw          $v0, -0x5FD4($at)
    ctx->pc = 0x2a5de4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942764), GPR_U32(ctx, 2));
    // 0x2a5de8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5dec: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2a5decu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5df0: 0xc0a9d80  jal         func_2A7600
    ctx->pc = 0x2A5DF0u;
    SET_GPR_U32(ctx, 31, 0x2A5DF8u);
    ctx->pc = 0x2A5DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5DF0u;
            // 0x2a5df4: 0xac20a03c  sw          $zero, -0x5FC4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294942780), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7600u;
    if (runtime->hasFunction(0x2A7600u)) {
        auto targetFn = runtime->lookupFunction(0x2A7600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5DF8u; }
        if (ctx->pc != 0x2A5DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrePlaySeSrc__6CSceneFv_0x2a7600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5DF8u; }
        if (ctx->pc != 0x2A5DF8u) { return; }
    }
    ctx->pc = 0x2A5DF8u;
label_2a5df8:
    // 0x2a5df8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a5df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5dfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a5dfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5e00: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5E00u;
            // 0x2a5e04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A5E08u;
}
