#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadEditInfo__13CEditInfoMngrFPciP9mgCMemory
// Address: 0x2a58e0 - 0x2a5960
void LoadEditInfo__13CEditInfoMngrFPciP9mgCMemory_0x2a58e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadEditInfo__13CEditInfoMngrFPciP9mgCMemory_0x2a58e0");
#endif

    switch (ctx->pc) {
        case 0x2a5924u: goto label_2a5924;
        case 0x2a5934u: goto label_2a5934;
        case 0x2a5944u: goto label_2a5944;
        case 0x2a594cu: goto label_2a594c;
        default: break;
    }

    ctx->pc = 0x2a58e0u;

    // 0x2a58e0: 0x27bdf100  addiu       $sp, $sp, -0xF00
    ctx->pc = 0x2a58e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963456));
    // 0x2a58e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a58e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a58e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a58e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a58ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a58ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a58f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a58f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a58f4: 0xaf849a54  sw          $a0, -0x65AC($gp)
    ctx->pc = 0x2a58f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941268), GPR_U32(ctx, 4));
    // 0x2a58f8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2a58f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a58fc: 0xaf879a58  sw          $a3, -0x65A8($gp)
    ctx->pc = 0x2a58fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941272), GPR_U32(ctx, 7));
    // 0x2a5900: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2a5900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a5904: 0xaf809a5c  sw          $zero, -0x65A4($gp)
    ctx->pc = 0x2a5904u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941276), GPR_U32(ctx, 0));
    // 0x2a5908: 0xaf809a64  sw          $zero, -0x659C($gp)
    ctx->pc = 0x2a5908u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941284), GPR_U32(ctx, 0));
    // 0x2a590c: 0xaf809a6c  sw          $zero, -0x6594($gp)
    ctx->pc = 0x2a590cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941292), GPR_U32(ctx, 0));
    // 0x2a5910: 0xaf809a70  sw          $zero, -0x6590($gp)
    ctx->pc = 0x2a5910u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941296), GPR_U32(ctx, 0));
    // 0x2a5914: 0xaf809a74  sw          $zero, -0x658C($gp)
    ctx->pc = 0x2a5914u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941300), GPR_U32(ctx, 0));
    // 0x2a5918: 0xaf809a78  sw          $zero, -0x6588($gp)
    ctx->pc = 0x2a5918u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941304), GPR_U32(ctx, 0));
    // 0x2a591c: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x2A591Cu;
    SET_GPR_U32(ctx, 31, 0x2A5924u);
    ctx->pc = 0x2A5920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A591Cu;
            // 0x2a5920: 0xaf809a7c  sw          $zero, -0x6584($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5924u; }
        if (ctx->pc != 0x2A5924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5924u; }
        if (ctx->pc != 0x2A5924u) { return; }
    }
    ctx->pc = 0x2A5924u;
label_2a5924:
    // 0x2a5924: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x2a5924u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x2a5928: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2a5928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a592c: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x2A592Cu;
    SET_GPR_U32(ctx, 31, 0x2A5934u);
    ctx->pc = 0x2A5930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A592Cu;
            // 0x2a5930: 0x24a543c0  addiu       $a1, $a1, 0x43C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5934u; }
        if (ctx->pc != 0x2A5934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5934u; }
        if (ctx->pc != 0x2A5934u) { return; }
    }
    ctx->pc = 0x2A5934u;
label_2a5934:
    // 0x2a5934: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a5934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5938: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a5938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a593c: 0xc051a60  jal         func_146980
    ctx->pc = 0x2A593Cu;
    SET_GPR_U32(ctx, 31, 0x2A5944u);
    ctx->pc = 0x2A5940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A593Cu;
            // 0x2a5940: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5944u; }
        if (ctx->pc != 0x2A5944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5944u; }
        if (ctx->pc != 0x2A5944u) { return; }
    }
    ctx->pc = 0x2A5944u;
label_2a5944:
    // 0x2a5944: 0xc0519c8  jal         func_146720
    ctx->pc = 0x2A5944u;
    SET_GPR_U32(ctx, 31, 0x2A594Cu);
    ctx->pc = 0x2A5948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5944u;
            // 0x2a5948: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A594Cu; }
        if (ctx->pc != 0x2A594Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A594Cu; }
        if (ctx->pc != 0x2A594Cu) { return; }
    }
    ctx->pc = 0x2A594Cu;
label_2a594c:
    // 0x2a594c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a594cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a5950: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a5950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5954: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a5954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5958: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A595Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5958u;
            // 0x2a595c: 0x27bd0f00  addiu       $sp, $sp, 0xF00 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3840));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A5960u;
}
