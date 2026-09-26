#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__16CUserDataManagerFv
// Address: 0x1943b0 - 0x194544
void ps2___ct__16CUserDataManagerFv_0x1943b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__16CUserDataManagerFv_0x1943b0");
#endif

    switch (ctx->pc) {
        case 0x1943d0u: goto label_1943d0;
        case 0x1943d8u: goto label_1943d8;
        case 0x1943f4u: goto label_1943f4;
        case 0x194400u: goto label_194400;
        case 0x194414u: goto label_194414;
        case 0x194420u: goto label_194420;
        case 0x19444cu: goto label_19444c;
        case 0x194454u: goto label_194454;
        case 0x194470u: goto label_194470;
        case 0x194478u: goto label_194478;
        case 0x194494u: goto label_194494;
        case 0x19449cu: goto label_19449c;
        case 0x1944b4u: goto label_1944b4;
        case 0x1944bcu: goto label_1944bc;
        case 0x1944d4u: goto label_1944d4;
        case 0x1944dcu: goto label_1944dc;
        case 0x1944fcu: goto label_1944fc;
        case 0x194504u: goto label_194504;
        case 0x194514u: goto label_194514;
        case 0x194524u: goto label_194524;
        default: break;
    }

    ctx->pc = 0x1943b0u;

    // 0x1943b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1943b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1943b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1943b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1943b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1943b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1943bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1943bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1943c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1943c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1943c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1943c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1943c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1943c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1943cc: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x1943ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1943d0:
    // 0x1943d0: 0xc065c24  jal         func_197090
    ctx->pc = 0x1943D0u;
    SET_GPR_U32(ctx, 31, 0x1943D8u);
    ctx->pc = 0x1943D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1943D0u;
            // 0x1943d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1943D8u; }
        if (ctx->pc != 0x1943D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1943D8u; }
        if (ctx->pc != 0x1943D8u) { return; }
    }
    ctx->pc = 0x1943D8u;
label_1943d8:
    // 0x1943d8: 0x2652006c  addiu       $s2, $s2, 0x6C
    ctx->pc = 0x1943d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
    // 0x1943dc: 0x26303f48  addiu       $s0, $s1, 0x3F48
    ctx->pc = 0x1943dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16200));
    // 0x1943e0: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x1943e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1943e4: 0x0  nop
    ctx->pc = 0x1943e4u;
    // NOP
    // 0x1943e8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1943E8u;
    {
        const bool branch_taken_0x1943e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1943e8) {
            ctx->pc = 0x1943D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1943d0;
        }
    }
    ctx->pc = 0x1943F0u;
    // 0x1943f0: 0x2613002c  addiu       $s3, $s0, 0x2C
    ctx->pc = 0x1943f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1943f4:
    // 0x1943f4: 0x0  nop
    ctx->pc = 0x1943f4u;
    // NOP
    // 0x1943f8: 0xc065c24  jal         func_197090
    ctx->pc = 0x1943F8u;
    SET_GPR_U32(ctx, 31, 0x194400u);
    ctx->pc = 0x1943FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1943F8u;
            // 0x1943fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194400u; }
        if (ctx->pc != 0x194400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194400u; }
        if (ctx->pc != 0x194400u) { return; }
    }
    ctx->pc = 0x194400u;
label_194400:
    // 0x194400: 0x2673006c  addiu       $s3, $s3, 0x6C
    ctx->pc = 0x194400u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x194404: 0x26120170  addiu       $s2, $s0, 0x170
    ctx->pc = 0x194404u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    // 0x194408: 0x272102b  sltu        $v0, $s3, $s2
    ctx->pc = 0x194408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x19440c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19440Cu;
    {
        const bool branch_taken_0x19440c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19440c) {
            ctx->pc = 0x1943F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1943f4;
        }
    }
    ctx->pc = 0x194414u;
label_194414:
    // 0x194414: 0x0  nop
    ctx->pc = 0x194414u;
    // NOP
    // 0x194418: 0xc065c24  jal         func_197090
    ctx->pc = 0x194418u;
    SET_GPR_U32(ctx, 31, 0x194420u);
    ctx->pc = 0x19441Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194418u;
            // 0x19441c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194420u; }
        if (ctx->pc != 0x194420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194420u; }
        if (ctx->pc != 0x194420u) { return; }
    }
    ctx->pc = 0x194420u;
label_194420:
    // 0x194420: 0x2652006c  addiu       $s2, $s2, 0x6C
    ctx->pc = 0x194420u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
    // 0x194424: 0x2602038c  addiu       $v0, $s0, 0x38C
    ctx->pc = 0x194424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 908));
    // 0x194428: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x194428u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19442c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19442Cu;
    {
        const bool branch_taken_0x19442c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19442c) {
            ctx->pc = 0x194414u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_194414;
        }
    }
    ctx->pc = 0x194434u;
    // 0x194434: 0x2610038c  addiu       $s0, $s0, 0x38C
    ctx->pc = 0x194434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 908));
    // 0x194438: 0x26224660  addiu       $v0, $s1, 0x4660
    ctx->pc = 0x194438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 18016));
    // 0x19443c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x19443cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x194440: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x194440u;
    {
        const bool branch_taken_0x194440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194440u;
            // 0x194444: 0x2613002c  addiu       $s3, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194440) {
            ctx->pc = 0x1943F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1943f4;
        }
    }
    ctx->pc = 0x194448u;
    // 0x194448: 0x26304690  addiu       $s0, $s1, 0x4690
    ctx->pc = 0x194448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 18064));
label_19444c:
    // 0x19444c: 0xc065c24  jal         func_197090
    ctx->pc = 0x19444Cu;
    SET_GPR_U32(ctx, 31, 0x194454u);
    ctx->pc = 0x194450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19444Cu;
            // 0x194450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194454u; }
        if (ctx->pc != 0x194454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194454u; }
        if (ctx->pc != 0x194454u) { return; }
    }
    ctx->pc = 0x194454u;
label_194454:
    // 0x194454: 0x2610006c  addiu       $s0, $s0, 0x6C
    ctx->pc = 0x194454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x194458: 0x26224840  addiu       $v0, $s1, 0x4840
    ctx->pc = 0x194458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 18496));
    // 0x19445c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x19445cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x194460: 0x0  nop
    ctx->pc = 0x194460u;
    // NOP
    // 0x194464: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x194464u;
    {
        const bool branch_taken_0x194464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194464) {
            ctx->pc = 0x19444Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19444c;
        }
    }
    ctx->pc = 0x19446Cu;
    // 0x19446c: 0x26304880  addiu       $s0, $s1, 0x4880
    ctx->pc = 0x19446cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 18560));
label_194470:
    // 0x194470: 0xc065c24  jal         func_197090
    ctx->pc = 0x194470u;
    SET_GPR_U32(ctx, 31, 0x194478u);
    ctx->pc = 0x194474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194470u;
            // 0x194474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194478u; }
        if (ctx->pc != 0x194478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194478u; }
        if (ctx->pc != 0x194478u) { return; }
    }
    ctx->pc = 0x194478u;
label_194478:
    // 0x194478: 0x2610006c  addiu       $s0, $s0, 0x6C
    ctx->pc = 0x194478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x19447c: 0x26224958  addiu       $v0, $s1, 0x4958
    ctx->pc = 0x19447cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 18776));
    // 0x194480: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x194480u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x194484: 0x0  nop
    ctx->pc = 0x194484u;
    // NOP
    // 0x194488: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x194488u;
    {
        const bool branch_taken_0x194488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194488) {
            ctx->pc = 0x194470u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_194470;
        }
    }
    ctx->pc = 0x194490u;
    // 0x194490: 0x2630495c  addiu       $s0, $s1, 0x495C
    ctx->pc = 0x194490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 18780));
label_194494:
    // 0x194494: 0xc065c24  jal         func_197090
    ctx->pc = 0x194494u;
    SET_GPR_U32(ctx, 31, 0x19449Cu);
    ctx->pc = 0x194498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194494u;
            // 0x194498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19449Cu; }
        if (ctx->pc != 0x19449Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19449Cu; }
        if (ctx->pc != 0x19449Cu) { return; }
    }
    ctx->pc = 0x19449Cu;
label_19449c:
    // 0x19449c: 0x2610006c  addiu       $s0, $s0, 0x6C
    ctx->pc = 0x19449cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x1944a0: 0x26324be4  addiu       $s2, $s1, 0x4BE4
    ctx->pc = 0x1944a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 19428));
    // 0x1944a4: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x1944a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1944a8: 0x0  nop
    ctx->pc = 0x1944a8u;
    // NOP
    // 0x1944ac: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1944ACu;
    {
        const bool branch_taken_0x1944ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1944ac) {
            ctx->pc = 0x194494u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_194494;
        }
    }
    ctx->pc = 0x1944B4u;
label_1944b4:
    // 0x1944b4: 0xc065c24  jal         func_197090
    ctx->pc = 0x1944B4u;
    SET_GPR_U32(ctx, 31, 0x1944BCu);
    ctx->pc = 0x1944B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1944B4u;
            // 0x1944b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1944BCu; }
        if (ctx->pc != 0x1944BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1944BCu; }
        if (ctx->pc != 0x1944BCu) { return; }
    }
    ctx->pc = 0x1944BCu;
label_1944bc:
    // 0x1944bc: 0x2652006c  addiu       $s2, $s2, 0x6C
    ctx->pc = 0x1944bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
    // 0x1944c0: 0x26304d94  addiu       $s0, $s1, 0x4D94
    ctx->pc = 0x1944c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 19860));
    // 0x1944c4: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x1944c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1944c8: 0x0  nop
    ctx->pc = 0x1944c8u;
    // NOP
    // 0x1944cc: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1944CCu;
    {
        const bool branch_taken_0x1944cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1944cc) {
            ctx->pc = 0x1944B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1944b4;
        }
    }
    ctx->pc = 0x1944D4u;
label_1944d4:
    // 0x1944d4: 0xc065c24  jal         func_197090
    ctx->pc = 0x1944D4u;
    SET_GPR_U32(ctx, 31, 0x1944DCu);
    ctx->pc = 0x1944D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1944D4u;
            // 0x1944d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1944DCu; }
        if (ctx->pc != 0x1944DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1944DCu; }
        if (ctx->pc != 0x1944DCu) { return; }
    }
    ctx->pc = 0x1944DCu;
label_1944dc:
    // 0x1944dc: 0x2610006c  addiu       $s0, $s0, 0x6C
    ctx->pc = 0x1944dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x1944e0: 0x26224e6c  addiu       $v0, $s1, 0x4E6C
    ctx->pc = 0x1944e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20076));
    // 0x1944e4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1944e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1944e8: 0x0  nop
    ctx->pc = 0x1944e8u;
    // NOP
    // 0x1944ec: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1944ECu;
    {
        const bool branch_taken_0x1944ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1944ec) {
            ctx->pc = 0x1944D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1944d4;
        }
    }
    ctx->pc = 0x1944F4u;
    // 0x1944f4: 0xc066858  jal         func_19A160
    ctx->pc = 0x1944F4u;
    SET_GPR_U32(ctx, 31, 0x1944FCu);
    ctx->pc = 0x1944F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1944F4u;
            // 0x1944f8: 0x26244958  addiu       $a0, $s1, 0x4958 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 18776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A160u;
    if (runtime->hasFunction(0x19A160u)) {
        auto targetFn = runtime->lookupFunction(0x19A160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1944FCu; }
        if (ctx->pc != 0x1944FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CFishAquariumFv_0x19a160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1944FCu; }
        if (ctx->pc != 0x1944FCu) { return; }
    }
    ctx->pc = 0x1944FCu;
label_1944fc:
    // 0x1944fc: 0xc07fa20  jal         func_1FE880
    ctx->pc = 0x1944FCu;
    SET_GPR_U32(ctx, 31, 0x194504u);
    ctx->pc = 0x194500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1944FCu;
            // 0x194500: 0x26247f30  addiu       $a0, $s1, 0x7F30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE880u;
    if (runtime->hasFunction(0x1FE880u)) {
        auto targetFn = runtime->lookupFunction(0x1FE880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194504u; }
        if (ctx->pc != 0x194504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__15CInventUserDataFv_0x1fe880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194504u; }
        if (ctx->pc != 0x194504u) { return; }
    }
    ctx->pc = 0x194504u;
label_194504:
    // 0x194504: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x194504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x194508: 0x342151e8  ori         $at, $at, 0x51E8
    ctx->pc = 0x194508u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20968);
    // 0x19450c: 0xc066bcc  jal         func_19AF30
    ctx->pc = 0x19450Cu;
    SET_GPR_U32(ctx, 31, 0x194514u);
    ctx->pc = 0x194510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19450Cu;
            // 0x194510: 0x2212021  addu        $a0, $s1, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19AF30u;
    if (runtime->hasFunction(0x19AF30u)) {
        auto targetFn = runtime->lookupFunction(0x19AF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194514u; }
        if (ctx->pc != 0x194514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__18CFishingTournamentFv_0x19af30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194514u; }
        if (ctx->pc != 0x194514u) { return; }
    }
    ctx->pc = 0x194514u;
label_194514:
    // 0x194514: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x194514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x194518: 0x34215258  ori         $at, $at, 0x5258
    ctx->pc = 0x194518u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21080);
    // 0x19451c: 0xc066b84  jal         func_19AE10
    ctx->pc = 0x19451Cu;
    SET_GPR_U32(ctx, 31, 0x194524u);
    ctx->pc = 0x194520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19451Cu;
            // 0x194520: 0x2212021  addu        $a0, $s1, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19AE10u;
    if (runtime->hasFunction(0x19AE10u)) {
        auto targetFn = runtime->lookupFunction(0x19AE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194524u; }
        if (ctx->pc != 0x194524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14CFishingRecordFv_0x19ae10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194524u; }
        if (ctx->pc != 0x194524u) { return; }
    }
    ctx->pc = 0x194524u;
label_194524:
    // 0x194524: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x194524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194528: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x194528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19452c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19452cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194530: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x194530u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194534: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x194534u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194538: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19453c: 0x3e00008  jr          $ra
    ctx->pc = 0x19453Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19453Cu;
            // 0x194540: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194544u;
}
