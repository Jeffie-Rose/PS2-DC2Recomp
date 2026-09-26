#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawEffectScript__6CSceneFi
// Address: 0x284600 - 0x284690
void DrawEffectScript__6CSceneFi_0x284600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawEffectScript__6CSceneFi_0x284600");
#endif

    switch (ctx->pc) {
        case 0x284620u: goto label_284620;
        case 0x284628u: goto label_284628;
        case 0x28463cu: goto label_28463c;
        case 0x284668u: goto label_284668;
        case 0x28467cu: goto label_28467c;
        default: break;
    }

    ctx->pc = 0x284600u;

    // 0x284600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x284600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x284604: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x284604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x284608: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x284608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28460c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28460cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x284610: 0x4a10013  bgez        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x284610u;
    {
        const bool branch_taken_0x284610 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x284614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284610u;
            // 0x284614: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284610) {
            ctx->pc = 0x284660u;
            goto label_284660;
        }
    }
    ctx->pc = 0x284618u;
    // 0x284618: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x284618u;
    {
        const bool branch_taken_0x284618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28461Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284618u;
            // 0x28461c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284618) {
            ctx->pc = 0x284644u;
            goto label_284644;
        }
    }
    ctx->pc = 0x284620u;
label_284620:
    // 0x284620: 0xc0a1150  jal         func_284540
    ctx->pc = 0x284620u;
    SET_GPR_U32(ctx, 31, 0x284628u);
    ctx->pc = 0x284624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284620u;
            // 0x284624: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284540u;
    if (runtime->hasFunction(0x284540u)) {
        auto targetFn = runtime->lookupFunction(0x284540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284628u; }
        if (ctx->pc != 0x284628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEffect__6CSceneFi_0x284540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284628u; }
        if (ctx->pc != 0x284628u) { return; }
    }
    ctx->pc = 0x284628u;
label_284628:
    // 0x284628: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x284628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28462c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28462Cu;
    {
        const bool branch_taken_0x28462c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28462c) {
            ctx->pc = 0x28463Cu;
            goto label_28463c;
        }
    }
    ctx->pc = 0x284634u;
    // 0x284634: 0xc0b866c  jal         func_2E19B0
    ctx->pc = 0x284634u;
    SET_GPR_U32(ctx, 31, 0x28463Cu);
    ctx->pc = 0x2E19B0u;
    if (runtime->hasFunction(0x2E19B0u)) {
        auto targetFn = runtime->lookupFunction(0x2E19B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28463Cu; }
        if (ctx->pc != 0x28463Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__16CEffectScriptManFv_0x2e19b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28463Cu; }
        if (ctx->pc != 0x28463Cu) { return; }
    }
    ctx->pc = 0x28463Cu;
label_28463c:
    // 0x28463c: 0x0  nop
    ctx->pc = 0x28463cu;
    // NOP
    // 0x284640: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x284640u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_284644:
    // 0x284644: 0x0  nop
    ctx->pc = 0x284644u;
    // NOP
    // 0x284648: 0x8e232aac  lw          $v1, 0x2AAC($s1)
    ctx->pc = 0x284648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10924)));
    // 0x28464c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x28464cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x284650: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x284650u;
    {
        const bool branch_taken_0x284650 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x284654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284650u;
            // 0x284654: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284650) {
            ctx->pc = 0x284620u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_284620;
        }
    }
    ctx->pc = 0x284658u;
    // 0x284658: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x284658u;
    {
        const bool branch_taken_0x284658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28465Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284658u;
            // 0x28465c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284658) {
            ctx->pc = 0x284680u;
            goto label_284680;
        }
    }
    ctx->pc = 0x284660u;
label_284660:
    // 0x284660: 0xc0a1150  jal         func_284540
    ctx->pc = 0x284660u;
    SET_GPR_U32(ctx, 31, 0x284668u);
    ctx->pc = 0x284540u;
    if (runtime->hasFunction(0x284540u)) {
        auto targetFn = runtime->lookupFunction(0x284540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284668u; }
        if (ctx->pc != 0x284668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEffect__6CSceneFi_0x284540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284668u; }
        if (ctx->pc != 0x284668u) { return; }
    }
    ctx->pc = 0x284668u;
label_284668:
    // 0x284668: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x284668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28466c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28466Cu;
    {
        const bool branch_taken_0x28466c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28466c) {
            ctx->pc = 0x28467Cu;
            goto label_28467c;
        }
    }
    ctx->pc = 0x284674u;
    // 0x284674: 0xc0b866c  jal         func_2E19B0
    ctx->pc = 0x284674u;
    SET_GPR_U32(ctx, 31, 0x28467Cu);
    ctx->pc = 0x2E19B0u;
    if (runtime->hasFunction(0x2E19B0u)) {
        auto targetFn = runtime->lookupFunction(0x2E19B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28467Cu; }
        if (ctx->pc != 0x28467Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__16CEffectScriptManFv_0x2e19b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28467Cu; }
        if (ctx->pc != 0x28467Cu) { return; }
    }
    ctx->pc = 0x28467Cu;
label_28467c:
    // 0x28467c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28467cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_284680:
    // 0x284680: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x284680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284684: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x284684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284688: 0x3e00008  jr          $ra
    ctx->pc = 0x284688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28468Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284688u;
            // 0x28468c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x284690u;
}
