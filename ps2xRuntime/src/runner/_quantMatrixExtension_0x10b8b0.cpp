#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _quantMatrixExtension
// Address: 0x10b8b0 - 0x10b974
void _quantMatrixExtension_0x10b8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_quantMatrixExtension_0x10b8b0");
#endif

    switch (ctx->pc) {
        case 0x10b8c8u: goto label_10b8c8;
        case 0x10b8d8u: goto label_10b8d8;
        case 0x10b8e4u: goto label_10b8e4;
        case 0x10b8ecu: goto label_10b8ec;
        case 0x10b8f8u: goto label_10b8f8;
        case 0x10b908u: goto label_10b908;
        case 0x10b914u: goto label_10b914;
        case 0x10b91cu: goto label_10b91c;
        case 0x10b928u: goto label_10b928;
        case 0x10b93cu: goto label_10b93c;
        case 0x10b948u: goto label_10b948;
        default: break;
    }

    ctx->pc = 0x10b8b0u;

    // 0x10b8b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b8b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10b8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b8b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b8bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10b8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10b8c0: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B8C0u;
    SET_GPR_U32(ctx, 31, 0x10B8C8u);
    ctx->pc = 0x10B8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B8C0u;
            // 0x10b8c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B8C8u; }
        if (ctx->pc != 0x10B8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B8C8u; }
        if (ctx->pc != 0x10B8C8u) { return; }
    }
    ctx->pc = 0x10B8C8u;
label_10b8c8:
    // 0x10b8c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10B8C8u;
    {
        const bool branch_taken_0x10b8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B8C8u;
            // 0x10b8cc: 0xae020840  sw          $v0, 0x840($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b8c8) {
            ctx->pc = 0x10B8ECu;
            goto label_10b8ec;
        }
    }
    ctx->pc = 0x10B8D0u;
    // 0x10b8d0: 0xc042ad8  jal         func_10AB60
    ctx->pc = 0x10B8D0u;
    SET_GPR_U32(ctx, 31, 0x10B8D8u);
    ctx->pc = 0x10B8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B8D0u;
            // 0x10b8d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AB60u;
    if (runtime->hasFunction(0x10AB60u)) {
        auto targetFn = runtime->lookupFunction(0x10AB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B8D8u; }
        if (ctx->pc != 0x10B8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x10ab60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B8D8u; }
        if (ctx->pc != 0x10B8D8u) { return; }
    }
    ctx->pc = 0x10B8D8u;
label_10b8d8:
    // 0x10b8d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b8dc: 0xc042acc  jal         func_10AB30
    ctx->pc = 0x10B8DCu;
    SET_GPR_U32(ctx, 31, 0x10B8E4u);
    ctx->pc = 0x10B8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B8DCu;
            // 0x10b8e0: 0x3c055000  lui         $a1, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AB30u;
    if (runtime->hasFunction(0x10AB30u)) {
        auto targetFn = runtime->lookupFunction(0x10AB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B8E4u; }
        if (ctx->pc != 0x10B8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x10ab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B8E4u; }
        if (ctx->pc != 0x10B8E4u) { return; }
    }
    ctx->pc = 0x10B8E4u;
label_10b8e4:
    // 0x10b8e4: 0xc042ad8  jal         func_10AB60
    ctx->pc = 0x10B8E4u;
    SET_GPR_U32(ctx, 31, 0x10B8ECu);
    ctx->pc = 0x10B8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B8E4u;
            // 0x10b8e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AB60u;
    if (runtime->hasFunction(0x10AB60u)) {
        auto targetFn = runtime->lookupFunction(0x10AB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B8ECu; }
        if (ctx->pc != 0x10B8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x10ab60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B8ECu; }
        if (ctx->pc != 0x10B8ECu) { return; }
    }
    ctx->pc = 0x10B8ECu;
label_10b8ec:
    // 0x10b8ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b8f0: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B8F0u;
    SET_GPR_U32(ctx, 31, 0x10B8F8u);
    ctx->pc = 0x10B8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B8F0u;
            // 0x10b8f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B8F8u; }
        if (ctx->pc != 0x10B8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B8F8u; }
        if (ctx->pc != 0x10B8F8u) { return; }
    }
    ctx->pc = 0x10B8F8u;
label_10b8f8:
    // 0x10b8f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10B8F8u;
    {
        const bool branch_taken_0x10b8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B8F8u;
            // 0x10b8fc: 0xae020844  sw          $v0, 0x844($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b8f8) {
            ctx->pc = 0x10B91Cu;
            goto label_10b91c;
        }
    }
    ctx->pc = 0x10B900u;
    // 0x10b900: 0xc042ad8  jal         func_10AB60
    ctx->pc = 0x10B900u;
    SET_GPR_U32(ctx, 31, 0x10B908u);
    ctx->pc = 0x10B904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B900u;
            // 0x10b904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AB60u;
    if (runtime->hasFunction(0x10AB60u)) {
        auto targetFn = runtime->lookupFunction(0x10AB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B908u; }
        if (ctx->pc != 0x10B908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x10ab60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B908u; }
        if (ctx->pc != 0x10B908u) { return; }
    }
    ctx->pc = 0x10B908u;
label_10b908:
    // 0x10b908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b90c: 0xc042acc  jal         func_10AB30
    ctx->pc = 0x10B90Cu;
    SET_GPR_U32(ctx, 31, 0x10B914u);
    ctx->pc = 0x10B910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B90Cu;
            // 0x10b910: 0x3c055800  lui         $a1, 0x5800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22528 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AB30u;
    if (runtime->hasFunction(0x10AB30u)) {
        auto targetFn = runtime->lookupFunction(0x10AB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B914u; }
        if (ctx->pc != 0x10B914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x10ab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B914u; }
        if (ctx->pc != 0x10B914u) { return; }
    }
    ctx->pc = 0x10B914u;
label_10b914:
    // 0x10b914: 0xc042ad8  jal         func_10AB60
    ctx->pc = 0x10B914u;
    SET_GPR_U32(ctx, 31, 0x10B91Cu);
    ctx->pc = 0x10B918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B914u;
            // 0x10b918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AB60u;
    if (runtime->hasFunction(0x10AB60u)) {
        auto targetFn = runtime->lookupFunction(0x10AB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B91Cu; }
        if (ctx->pc != 0x10B91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x10ab60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B91Cu; }
        if (ctx->pc != 0x10B91Cu) { return; }
    }
    ctx->pc = 0x10B91Cu;
label_10b91c:
    // 0x10b91c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b920: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B920u;
    SET_GPR_U32(ctx, 31, 0x10B928u);
    ctx->pc = 0x10B924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B920u;
            // 0x10b924: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B928u; }
        if (ctx->pc != 0x10B928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B928u; }
        if (ctx->pc != 0x10B928u) { return; }
    }
    ctx->pc = 0x10B928u;
label_10b928:
    // 0x10b928: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B928u;
    {
        const bool branch_taken_0x10b928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B928u;
            // 0x10b92c: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b928) {
            ctx->pc = 0x10B93Cu;
            goto label_10b93c;
        }
    }
    ctx->pc = 0x10B930u;
    // 0x10b930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b934: 0xc043b64  jal         func_10ED90
    ctx->pc = 0x10B934u;
    SET_GPR_U32(ctx, 31, 0x10B93Cu);
    ctx->pc = 0x10B938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B934u;
            // 0x10b938: 0x24a50768  addiu       $a1, $a1, 0x768 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ED90u;
    if (runtime->hasFunction(0x10ED90u)) {
        auto targetFn = runtime->lookupFunction(0x10ED90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B93Cu; }
        if (ctx->pc != 0x10B93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x10ed90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B93Cu; }
        if (ctx->pc != 0x10B93Cu) { return; }
    }
    ctx->pc = 0x10B93Cu;
label_10b93c:
    // 0x10b93c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b940: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B940u;
    SET_GPR_U32(ctx, 31, 0x10B948u);
    ctx->pc = 0x10B944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B940u;
            // 0x10b944: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B948u; }
        if (ctx->pc != 0x10B948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B948u; }
        if (ctx->pc != 0x10B948u) { return; }
    }
    ctx->pc = 0x10B948u;
label_10b948:
    // 0x10b948: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10B948u;
    {
        const bool branch_taken_0x10b948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B948u;
            // 0x10b94c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b948) {
            ctx->pc = 0x10B968u;
            goto label_10b968;
        }
    }
    ctx->pc = 0x10B950u;
    // 0x10b950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b954: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x10b954u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x10b958: 0x24a50790  addiu       $a1, $a1, 0x790
    ctx->pc = 0x10b958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1936));
    // 0x10b95c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b95cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b960: 0x8043b64  j           func_10ED90
    ctx->pc = 0x10B960u;
    ctx->pc = 0x10B964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B960u;
            // 0x10b964: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ED90u;
    if (runtime->hasFunction(0x10ED90u)) {
        auto targetFn = runtime->lookupFunction(0x10ED90u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        ps2__Error_0x10ed90(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10B968u;
label_10b968:
    // 0x10b968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b96c: 0x3e00008  jr          $ra
    ctx->pc = 0x10B96Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B96Cu;
            // 0x10b970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10B974u;
}
