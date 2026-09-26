#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitLooSeMngr__6CSceneFv
// Address: 0x2a6060 - 0x2a60dc
void InitLooSeMngr__6CSceneFv_0x2a6060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitLooSeMngr__6CSceneFv_0x2a6060");
#endif

    switch (ctx->pc) {
        case 0x2a608cu: goto label_2a608c;
        case 0x2a609cu: goto label_2a609c;
        case 0x2a60bcu: goto label_2a60bc;
        case 0x2a60ccu: goto label_2a60cc;
        default: break;
    }

    ctx->pc = 0x2a6060u;

    // 0x2a6060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a6060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a6064: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a6064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a6068: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a6068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a606c: 0x3401e510  ori         $at, $zero, 0xE510
    ctx->pc = 0x2a606cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58640);
    // 0x2a6070: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a6070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a6074: 0x34420510  ori         $v0, $v0, 0x510
    ctx->pc = 0x2a6074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1296);
    // 0x2a6078: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a6078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a607c: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x2a607cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2a6080: 0x2012821  addu        $a1, $s0, $at
    ctx->pc = 0x2a6080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a6084: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2A6084u;
    SET_GPR_U32(ctx, 31, 0x2A608Cu);
    ctx->pc = 0x2A6088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6084u;
            // 0x2a6088: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A608Cu; }
        if (ctx->pc != 0x2A608Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A608Cu; }
        if (ctx->pc != 0x2A608Cu) { return; }
    }
    ctx->pc = 0x2A608Cu;
label_2a608c:
    // 0x2a608c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a608cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a6090: 0x34420540  ori         $v0, $v0, 0x540
    ctx->pc = 0x2a6090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1344);
    // 0x2a6094: 0xc063154  jal         func_18C550
    ctx->pc = 0x2A6094u;
    SET_GPR_U32(ctx, 31, 0x2A609Cu);
    ctx->pc = 0x2A6098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6094u;
            // 0x2a6098: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C550u;
    if (runtime->hasFunction(0x18C550u)) {
        auto targetFn = runtime->lookupFunction(0x18C550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A609Cu; }
        if (ctx->pc != 0x2A609Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CLoopSeMngrFv_0x18c550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A609Cu; }
        if (ctx->pc != 0x2A609Cu) { return; }
    }
    ctx->pc = 0x2A609Cu;
label_2a609c:
    // 0x2a609c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a609cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a60a0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x2a60a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2a60a4: 0x34210540  ori         $at, $at, 0x540
    ctx->pc = 0x2a60a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1344);
    // 0x2a60a8: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2a60a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a60ac: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a60acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a60b0: 0x34210510  ori         $at, $at, 0x510
    ctx->pc = 0x2a60b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1296);
    // 0x2a60b4: 0xc06311c  jal         func_18C470
    ctx->pc = 0x2A60B4u;
    SET_GPR_U32(ctx, 31, 0x2A60BCu);
    ctx->pc = 0x2A60B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A60B4u;
            // 0x2a60b8: 0x2013021  addu        $a2, $s0, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C470u;
    if (runtime->hasFunction(0x18C470u)) {
        auto targetFn = runtime->lookupFunction(0x18C470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A60BCu; }
        if (ctx->pc != 0x2A60BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Create__11CLoopSeMngrFiP9mgCMemory_0x18c470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A60BCu; }
        if (ctx->pc != 0x2A60BCu) { return; }
    }
    ctx->pc = 0x2A60BCu;
label_2a60bc:
    // 0x2a60bc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a60bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a60c0: 0x34210540  ori         $at, $at, 0x540
    ctx->pc = 0x2a60c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1344);
    // 0x2a60c4: 0xc063158  jal         func_18C560
    ctx->pc = 0x2A60C4u;
    SET_GPR_U32(ctx, 31, 0x2A60CCu);
    ctx->pc = 0x2A60C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A60C4u;
            // 0x2a60c8: 0x2012021  addu        $a0, $s0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C560u;
    if (runtime->hasFunction(0x18C560u)) {
        auto targetFn = runtime->lookupFunction(0x18C560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A60CCu; }
        if (ctx->pc != 0x2A60CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Clear__11CLoopSeMngrFv_0x18c560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A60CCu; }
        if (ctx->pc != 0x2A60CCu) { return; }
    }
    ctx->pc = 0x2A60CCu;
label_2a60cc:
    // 0x2a60cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a60ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a60d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a60d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a60d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A60D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A60D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A60D4u;
            // 0x2a60d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A60DCu;
}
