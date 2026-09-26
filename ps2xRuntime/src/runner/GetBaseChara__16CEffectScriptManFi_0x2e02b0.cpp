#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetBaseChara__16CEffectScriptManFi
// Address: 0x2e02b0 - 0x2e0380
void GetBaseChara__16CEffectScriptManFi_0x2e02b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetBaseChara__16CEffectScriptManFi_0x2e02b0");
#endif

    switch (ctx->pc) {
        case 0x2e02dcu: goto label_2e02dc;
        case 0x2e02f4u: goto label_2e02f4;
        case 0x2e0310u: goto label_2e0310;
        case 0x2e0334u: goto label_2e0334;
        default: break;
    }

    ctx->pc = 0x2e02b0u;

    // 0x2e02b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e02b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e02b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e02b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e02b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e02b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e02bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e02bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e02c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e02c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e02c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e02c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e02c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e02c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e02cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e02ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e02d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e02d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e02d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e02d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e02d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e02d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e02dc:
    // 0x2e02dc: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x2e02dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2e02e0: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x2e02e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2e02e4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E02E4u;
    {
        const bool branch_taken_0x2e02e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e02e4) {
            ctx->pc = 0x2E034Cu;
            goto label_2e034c;
        }
    }
    ctx->pc = 0x2E02ECu;
    // 0x2e02ec: 0xc0b8b24  jal         func_2E2C90
    ctx->pc = 0x2E02ECu;
    SET_GPR_U32(ctx, 31, 0x2E02F4u);
    ctx->pc = 0x2E02F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E02ECu;
            // 0x2e02f0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2C90u;
    if (runtime->hasFunction(0x2E2C90u)) {
        auto targetFn = runtime->lookupFunction(0x2E2C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E02F4u; }
        if (ctx->pc != 0x2E02F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEffSptBaseDefPtr__Fi_0x2e2c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E02F4u; }
        if (ctx->pc != 0x2E02F4u) { return; }
    }
    ctx->pc = 0x2E02F4u;
label_2e02f4:
    // 0x2e02f4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2e02f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e02f8: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E02F8u;
    {
        const bool branch_taken_0x2e02f8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E02FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E02F8u;
            // 0x2e02fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e02f8) {
            ctx->pc = 0x2E0308u;
            goto label_2e0308;
        }
    }
    ctx->pc = 0x2E0300u;
    // 0x2e0300: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E0300u;
    {
        const bool branch_taken_0x2e0300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0300u;
            // 0x2e0304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0300) {
            ctx->pc = 0x2E0360u;
            goto label_2e0360;
        }
    }
    ctx->pc = 0x2E0308u;
label_2e0308:
    // 0x2e0308: 0xc0b8b24  jal         func_2E2C90
    ctx->pc = 0x2E0308u;
    SET_GPR_U32(ctx, 31, 0x2E0310u);
    ctx->pc = 0x2E2C90u;
    if (runtime->hasFunction(0x2E2C90u)) {
        auto targetFn = runtime->lookupFunction(0x2E2C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0310u; }
        if (ctx->pc != 0x2E0310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEffSptBaseDefPtr__Fi_0x2e2c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0310u; }
        if (ctx->pc != 0x2E0310u) { return; }
    }
    ctx->pc = 0x2E0310u;
label_2e0310:
    // 0x2e0310: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0310u;
    {
        const bool branch_taken_0x2e0310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0310) {
            ctx->pc = 0x2E0320u;
            goto label_2e0320;
        }
    }
    ctx->pc = 0x2E0318u;
    // 0x2e0318: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E0318u;
    {
        const bool branch_taken_0x2e0318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E031Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0318u;
            // 0x2e031c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0318) {
            ctx->pc = 0x2E0360u;
            goto label_2e0360;
        }
    }
    ctx->pc = 0x2E0320u;
label_2e0320:
    // 0x2e0320: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x2e0320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2e0324: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E0324u;
    {
        const bool branch_taken_0x2e0324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0324u;
            // 0x2e0328: 0x26840024  addiu       $a0, $s4, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0324) {
            ctx->pc = 0x2E034Cu;
            goto label_2e034c;
        }
    }
    ctx->pc = 0x2E032Cu;
    // 0x2e032c: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x2E032Cu;
    SET_GPR_U32(ctx, 31, 0x2E0334u);
    ctx->pc = 0x2E0330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E032Cu;
            // 0x2e0330: 0x24450024  addiu       $a1, $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0334u; }
        if (ctx->pc != 0x2E0334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0334u; }
        if (ctx->pc != 0x2E0334u) { return; }
    }
    ctx->pc = 0x2E0334u;
label_2e0334:
    // 0x2e0334: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0334u;
    {
        const bool branch_taken_0x2e0334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0334u;
            // 0x2e0338: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0334) {
            ctx->pc = 0x2E034Cu;
            goto label_2e034c;
        }
    }
    ctx->pc = 0x2E033Cu;
    // 0x2e033c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2e033cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2e0340: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x2e0340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2e0344: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E0344u;
    {
        const bool branch_taken_0x2e0344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0344u;
            // 0x2e0348: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0344) {
            ctx->pc = 0x2E0360u;
            goto label_2e0360;
        }
    }
    ctx->pc = 0x2E034Cu;
label_2e034c:
    // 0x2e034c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2e034cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2e0350: 0x2a620040  slti        $v0, $s3, 0x40
    ctx->pc = 0x2e0350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2e0354: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2E0354u;
    {
        const bool branch_taken_0x2e0354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0354u;
            // 0x2e0358: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0354) {
            ctx->pc = 0x2E02DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e02dc;
        }
    }
    ctx->pc = 0x2E035Cu;
    // 0x2e035c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e035cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e0360:
    // 0x2e0360: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e0360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e0364: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e0364u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0368: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e0368u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e036c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e036cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0370: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e0370u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0374: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e0374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0378: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E037Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0378u;
            // 0x2e037c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E0380u;
}
