#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditControlStatusInit__FP6CScene
// Address: 0x1a4230 - 0x1a42a4
void EditControlStatusInit__FP6CScene_0x1a4230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditControlStatusInit__FP6CScene_0x1a4230");
#endif

    switch (ctx->pc) {
        case 0x1a4230u: goto label_1a4230;
        case 0x1a4234u: goto label_1a4234;
        case 0x1a4238u: goto label_1a4238;
        case 0x1a423cu: goto label_1a423c;
        case 0x1a4240u: goto label_1a4240;
        case 0x1a4244u: goto label_1a4244;
        case 0x1a4248u: goto label_1a4248;
        case 0x1a424cu: goto label_1a424c;
        case 0x1a4250u: goto label_1a4250;
        case 0x1a4254u: goto label_1a4254;
        case 0x1a4258u: goto label_1a4258;
        case 0x1a425cu: goto label_1a425c;
        case 0x1a4260u: goto label_1a4260;
        case 0x1a4264u: goto label_1a4264;
        case 0x1a4268u: goto label_1a4268;
        case 0x1a426cu: goto label_1a426c;
        case 0x1a4270u: goto label_1a4270;
        case 0x1a4274u: goto label_1a4274;
        case 0x1a4278u: goto label_1a4278;
        case 0x1a427cu: goto label_1a427c;
        case 0x1a4280u: goto label_1a4280;
        case 0x1a4284u: goto label_1a4284;
        case 0x1a4288u: goto label_1a4288;
        case 0x1a428cu: goto label_1a428c;
        case 0x1a4290u: goto label_1a4290;
        case 0x1a4294u: goto label_1a4294;
        case 0x1a4298u: goto label_1a4298;
        case 0x1a429cu: goto label_1a429c;
        case 0x1a42a0u: goto label_1a42a0;
        default: break;
    }

    ctx->pc = 0x1a4230u;

label_1a4230:
    // 0x1a4230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a4234:
    // 0x1a4234: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a4234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a4238:
    // 0x1a4238: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a4238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a423c:
    // 0x1a423c: 0xaf808b98  sw          $zero, -0x7468($gp)
    ctx->pc = 0x1a423cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937496), GPR_U32(ctx, 0));
label_1a4240:
    // 0x1a4240: 0xaf808ba0  sw          $zero, -0x7460($gp)
    ctx->pc = 0x1a4240u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937504), GPR_U32(ctx, 0));
label_1a4244:
    // 0x1a4244: 0xaf808ba4  sw          $zero, -0x745C($gp)
    ctx->pc = 0x1a4244u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937508), GPR_U32(ctx, 0));
label_1a4248:
    // 0x1a4248: 0xaf808ba8  sw          $zero, -0x7458($gp)
    ctx->pc = 0x1a4248u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937512), GPR_U32(ctx, 0));
label_1a424c:
    // 0x1a424c: 0xaf808bb8  sw          $zero, -0x7448($gp)
    ctx->pc = 0x1a424cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937528), GPR_U32(ctx, 0));
label_1a4250:
    // 0x1a4250: 0xc0a0ed8  jal         func_283B60
label_1a4254:
    if (ctx->pc == 0x1A4254u) {
        ctx->pc = 0x1A4254u;
            // 0x1a4254: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->pc = 0x1A4258u;
        goto label_1a4258;
    }
    ctx->pc = 0x1A4250u;
    SET_GPR_U32(ctx, 31, 0x1A4258u);
    ctx->pc = 0x1A4254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4250u;
            // 0x1a4254: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4258u; }
        if (ctx->pc != 0x1A4258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4258u; }
        if (ctx->pc != 0x1A4258u) { return; }
    }
    ctx->pc = 0x1A4258u;
label_1a4258:
    // 0x1a4258: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a4258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a425c:
    // 0x1a425c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_1a4260:
    if (ctx->pc == 0x1A4260u) {
        ctx->pc = 0x1A4264u;
        goto label_1a4264;
    }
    ctx->pc = 0x1A425Cu;
    {
        const bool branch_taken_0x1a425c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a425c) {
            ctx->pc = 0x1A4294u;
            goto label_1a4294;
        }
    }
    ctx->pc = 0x1A4264u;
label_1a4264:
    // 0x1a4264: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a4264u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a4268:
    // 0x1a4268: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a4268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a426c:
    // 0x1a426c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a426cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4270:
    // 0x1a4270: 0x24a55af8  addiu       $a1, $a1, 0x5AF8
    ctx->pc = 0x1a4270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23288));
label_1a4274:
    // 0x1a4274: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x1a4274u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_1a4278:
    // 0x1a4278: 0x320f809  jalr        $t9
label_1a427c:
    if (ctx->pc == 0x1A427Cu) {
        ctx->pc = 0x1A427Cu;
            // 0x1a427c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1A4280u;
        goto label_1a4280;
    }
    ctx->pc = 0x1A4278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A4280u);
        ctx->pc = 0x1A427Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4278u;
            // 0x1a427c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A4280u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A4280u; }
            if (ctx->pc != 0x1A4280u) { return; }
        }
        }
    }
    ctx->pc = 0x1A4280u;
label_1a4280:
    // 0x1a4280: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x1a4280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
label_1a4284:
    // 0x1a4284: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a4284u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a4288:
    // 0x1a4288: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x1a4288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_1a428c:
    // 0x1a428c: 0x320f809  jalr        $t9
label_1a4290:
    if (ctx->pc == 0x1A4290u) {
        ctx->pc = 0x1A4290u;
            // 0x1a4290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4294u;
        goto label_1a4294;
    }
    ctx->pc = 0x1A428Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A4294u);
        ctx->pc = 0x1A4290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A428Cu;
            // 0x1a4290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A4294u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A4294u; }
            if (ctx->pc != 0x1A4294u) { return; }
        }
        }
    }
    ctx->pc = 0x1A4294u;
label_1a4294:
    // 0x1a4294: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4298:
    // 0x1a4298: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a4298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a429c:
    // 0x1a429c: 0x3e00008  jr          $ra
label_1a42a0:
    if (ctx->pc == 0x1A42A0u) {
        ctx->pc = 0x1A42A0u;
            // 0x1a42a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A42A4u;
        goto label_fallthrough_0x1a429c;
    }
    ctx->pc = 0x1A429Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A42A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A429Cu;
            // 0x1a42a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a429c:
    ctx->pc = 0x1A42A4u;
}
