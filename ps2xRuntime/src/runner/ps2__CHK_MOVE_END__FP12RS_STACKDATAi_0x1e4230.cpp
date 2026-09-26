#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHK_MOVE_END__FP12RS_STACKDATAi
// Address: 0x1e4230 - 0x1e42b8
void ps2__CHK_MOVE_END__FP12RS_STACKDATAi_0x1e4230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHK_MOVE_END__FP12RS_STACKDATAi_0x1e4230");
#endif

    switch (ctx->pc) {
        case 0x1e4230u: goto label_1e4230;
        case 0x1e4234u: goto label_1e4234;
        case 0x1e4238u: goto label_1e4238;
        case 0x1e423cu: goto label_1e423c;
        case 0x1e4240u: goto label_1e4240;
        case 0x1e4244u: goto label_1e4244;
        case 0x1e4248u: goto label_1e4248;
        case 0x1e424cu: goto label_1e424c;
        case 0x1e4250u: goto label_1e4250;
        case 0x1e4254u: goto label_1e4254;
        case 0x1e4258u: goto label_1e4258;
        case 0x1e425cu: goto label_1e425c;
        case 0x1e4260u: goto label_1e4260;
        case 0x1e4264u: goto label_1e4264;
        case 0x1e4268u: goto label_1e4268;
        case 0x1e426cu: goto label_1e426c;
        case 0x1e4270u: goto label_1e4270;
        case 0x1e4274u: goto label_1e4274;
        case 0x1e4278u: goto label_1e4278;
        case 0x1e427cu: goto label_1e427c;
        case 0x1e4280u: goto label_1e4280;
        case 0x1e4284u: goto label_1e4284;
        case 0x1e4288u: goto label_1e4288;
        case 0x1e428cu: goto label_1e428c;
        case 0x1e4290u: goto label_1e4290;
        case 0x1e4294u: goto label_1e4294;
        case 0x1e4298u: goto label_1e4298;
        case 0x1e429cu: goto label_1e429c;
        case 0x1e42a0u: goto label_1e42a0;
        case 0x1e42a4u: goto label_1e42a4;
        case 0x1e42a8u: goto label_1e42a8;
        case 0x1e42acu: goto label_1e42ac;
        case 0x1e42b0u: goto label_1e42b0;
        case 0x1e42b4u: goto label_1e42b4;
        default: break;
    }

    ctx->pc = 0x1e4230u;

label_1e4230:
    // 0x1e4230: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e4230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1e4234:
    // 0x1e4234: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4238:
    // 0x1e4238: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e4238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e423c:
    // 0x1e423c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e423cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e4240:
    // 0x1e4240: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e4240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e4244:
    // 0x1e4244: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_1e4248:
    if (ctx->pc == 0x1E4248u) {
        ctx->pc = 0x1E4248u;
            // 0x1e4248: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E424Cu;
        goto label_1e424c;
    }
    ctx->pc = 0x1E4244u;
    {
        const bool branch_taken_0x1e4244 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E4248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4244u;
            // 0x1e4248: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4244) {
            ctx->pc = 0x1E4254u;
            goto label_1e4254;
        }
    }
    ctx->pc = 0x1E424Cu;
label_1e424c:
    // 0x1e424c: 0x10000015  b           . + 4 + (0x15 << 2)
label_1e4250:
    if (ctx->pc == 0x1E4250u) {
        ctx->pc = 0x1E4250u;
            // 0x1e4250: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4254u;
        goto label_1e4254;
    }
    ctx->pc = 0x1E424Cu;
    {
        const bool branch_taken_0x1e424c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E424Cu;
            // 0x1e4250: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e424c) {
            ctx->pc = 0x1E42A4u;
            goto label_1e42a4;
        }
    }
    ctx->pc = 0x1E4254u;
label_1e4254:
    // 0x1e4254: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e4254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e4258:
    // 0x1e4258: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1e4258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1e425c:
    // 0x1e425c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e425cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e4260:
    // 0x1e4260: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e4260u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e4264:
    // 0x1e4264: 0x320f809  jalr        $t9
label_1e4268:
    if (ctx->pc == 0x1E4268u) {
        ctx->pc = 0x1E4268u;
            // 0x1e4268: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E426Cu;
        goto label_1e426c;
    }
    ctx->pc = 0x1E4264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E426Cu);
        ctx->pc = 0x1E4268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4264u;
            // 0x1e4268: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E426Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E426Cu; }
            if (ctx->pc != 0x1E426Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E426Cu;
label_1e426c:
    // 0x1e426c: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e426cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e4270:
    // 0x1e4270: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e4270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1e4274:
    // 0x1e4274: 0xc04c018  jal         func_130060
label_1e4278:
    if (ctx->pc == 0x1E4278u) {
        ctx->pc = 0x1E4278u;
            // 0x1e4278: 0x24451470  addiu       $a1, $v0, 0x1470 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5232));
        ctx->pc = 0x1E427Cu;
        goto label_1e427c;
    }
    ctx->pc = 0x1E4274u;
    SET_GPR_U32(ctx, 31, 0x1E427Cu);
    ctx->pc = 0x1E4278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4274u;
            // 0x1e4278: 0x24451470  addiu       $a1, $v0, 0x1470 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E427Cu; }
        if (ctx->pc != 0x1E427Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E427Cu; }
        if (ctx->pc != 0x1E427Cu) { return; }
    }
    ctx->pc = 0x1E427Cu;
label_1e427c:
    // 0x1e427c: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e427cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e4280:
    // 0x1e4280: 0xc4411484  lwc1        $f1, 0x1484($v0)
    ctx->pc = 0x1e4280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4284:
    // 0x1e4284: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e4284u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e4288:
    // 0x1e4288: 0x0  nop
    ctx->pc = 0x1e4288u;
    // NOP
label_1e428c:
    // 0x1e428c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1e4290:
    if (ctx->pc == 0x1E4290u) {
        ctx->pc = 0x1E4290u;
            // 0x1e4290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4294u;
        goto label_1e4294;
    }
    ctx->pc = 0x1E428Cu;
    {
        const bool branch_taken_0x1e428c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E4290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E428Cu;
            // 0x1e4290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e428c) {
            ctx->pc = 0x1E4298u;
            goto label_1e4298;
        }
    }
    ctx->pc = 0x1E4294u;
label_1e4294:
    // 0x1e4294: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1e4294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4298:
    // 0x1e4298: 0xc0781bc  jal         func_1E06F0
label_1e429c:
    if (ctx->pc == 0x1E429Cu) {
        ctx->pc = 0x1E429Cu;
            // 0x1e429c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E42A0u;
        goto label_1e42a0;
    }
    ctx->pc = 0x1E4298u;
    SET_GPR_U32(ctx, 31, 0x1E42A0u);
    ctx->pc = 0x1E429Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4298u;
            // 0x1e429c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E42A0u; }
        if (ctx->pc != 0x1E42A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E42A0u; }
        if (ctx->pc != 0x1E42A0u) { return; }
    }
    ctx->pc = 0x1E42A0u;
label_1e42a0:
    // 0x1e42a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e42a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e42a4:
    // 0x1e42a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e42a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e42a8:
    // 0x1e42a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e42a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e42ac:
    // 0x1e42ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e42acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e42b0:
    // 0x1e42b0: 0x3e00008  jr          $ra
label_1e42b4:
    if (ctx->pc == 0x1E42B4u) {
        ctx->pc = 0x1E42B4u;
            // 0x1e42b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1E42B8u;
        goto label_fallthrough_0x1e42b0;
    }
    ctx->pc = 0x1E42B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E42B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E42B0u;
            // 0x1e42b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e42b0:
    ctx->pc = 0x1E42B8u;
}
