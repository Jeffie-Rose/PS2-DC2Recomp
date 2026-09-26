#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AttachInfo__15CMENU_USERPARAMFv
// Address: 0x23a5e0 - 0x23a668
void AttachInfo__15CMENU_USERPARAMFv_0x23a5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AttachInfo__15CMENU_USERPARAMFv_0x23a5e0");
#endif

    switch (ctx->pc) {
        case 0x23a5f4u: goto label_23a5f4;
        case 0x23a600u: goto label_23a600;
        case 0x23a610u: goto label_23a610;
        case 0x23a62cu: goto label_23a62c;
        case 0x23a63cu: goto label_23a63c;
        case 0x23a654u: goto label_23a654;
        default: break;
    }

    ctx->pc = 0x23a5e0u;

    // 0x23a5e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23a5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23a5e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23a5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23a5e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23a5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23a5ec: 0xc08e970  jal         func_23A5C0
    ctx->pc = 0x23A5ECu;
    SET_GPR_U32(ctx, 31, 0x23A5F4u);
    ctx->pc = 0x23A5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A5ECu;
            // 0x23a5f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A5C0u;
    if (runtime->hasFunction(0x23A5C0u)) {
        auto targetFn = runtime->lookupFunction(0x23A5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A5F4u; }
        if (ctx->pc != 0x23A5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__15CMENU_USERPARAMFv_0x23a5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A5F4u; }
        if (ctx->pc != 0x23A5F4u) { return; }
    }
    ctx->pc = 0x23A5F4u;
label_23a5f4:
    // 0x23a5f4: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x23a5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x23a5f8: 0xc066d24  jal         func_19B490
    ctx->pc = 0x23A5F8u;
    SET_GPR_U32(ctx, 31, 0x23A600u);
    ctx->pc = 0x23A5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A5F8u;
            // 0x23a5fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A600u; }
        if (ctx->pc != 0x23A600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A600u; }
        if (ctx->pc != 0x23A600u) { return; }
    }
    ctx->pc = 0x23A600u;
label_23a600:
    // 0x23a600: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x23a600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x23a604: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x23a604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x23a608: 0xc066d24  jal         func_19B490
    ctx->pc = 0x23A608u;
    SET_GPR_U32(ctx, 31, 0x23A610u);
    ctx->pc = 0x23A60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A608u;
            // 0x23a60c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A610u; }
        if (ctx->pc != 0x23A610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A610u; }
        if (ctx->pc != 0x23A610u) { return; }
    }
    ctx->pc = 0x23A610u;
label_23a610:
    // 0x23a610: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x23a610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x23a614: 0x8f8294ac  lw          $v0, -0x6B54($gp)
    ctx->pc = 0x23a614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x23a618: 0x24424660  addiu       $v0, $v0, 0x4660
    ctx->pc = 0x23a618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18016));
    // 0x23a61c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x23a61cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x23a620: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x23a620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x23a624: 0xc066d14  jal         func_19B450
    ctx->pc = 0x23A624u;
    SET_GPR_U32(ctx, 31, 0x23A62Cu);
    ctx->pc = 0x23A628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A624u;
            // 0x23a628: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B450u;
    if (runtime->hasFunction(0x19B450u)) {
        auto targetFn = runtime->lookupFunction(0x19B450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A62Cu; }
        if (ctx->pc != 0x23A62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUsedDataPtr__16CUserDataManagerFi_0x19b450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A62Cu; }
        if (ctx->pc != 0x23A62Cu) { return; }
    }
    ctx->pc = 0x23A62Cu;
label_23a62c:
    // 0x23a62c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x23a62cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x23a630: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x23a630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x23a634: 0xc0670bc  jal         func_19C2F0
    ctx->pc = 0x23A634u;
    SET_GPR_U32(ctx, 31, 0x23A63Cu);
    ctx->pc = 0x23A638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A634u;
            // 0x23a638: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C2F0u;
    if (runtime->hasFunction(0x19C2F0u)) {
        auto targetFn = runtime->lookupFunction(0x19C2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A63Cu; }
        if (ctx->pc != 0x23A63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterBajjiDataPtr__16CUserDataManagerFi_0x19c2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A63Cu; }
        if (ctx->pc != 0x23A63Cu) { return; }
    }
    ctx->pc = 0x23A63Cu;
label_23a63c:
    // 0x23a63c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x23a63cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x23a640: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x23a640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x23a644: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x23a644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x23a648: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x23a648u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x23a64c: 0xc0670c0  jal         func_19C300
    ctx->pc = 0x23A64Cu;
    SET_GPR_U32(ctx, 31, 0x23A654u);
    ctx->pc = 0x23A650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A64Cu;
            // 0x23a650: 0x84254d98  lh          $a1, 0x4D98($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19864)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C300u;
    if (runtime->hasFunction(0x19C300u)) {
        auto targetFn = runtime->lookupFunction(0x19C300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A654u; }
        if (ctx->pc != 0x23A654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterBajjiDataPtrMosId__16CUserDataManagerFi_0x19c300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A654u; }
        if (ctx->pc != 0x23A654u) { return; }
    }
    ctx->pc = 0x23A654u;
label_23a654:
    // 0x23a654: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x23a654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x23a658: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23a658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a65c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23a65cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a660: 0x3e00008  jr          $ra
    ctx->pc = 0x23A660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A660u;
            // 0x23a664: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23A668u;
}
