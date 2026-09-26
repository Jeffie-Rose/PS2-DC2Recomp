#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHR_SET_POS__FP12RS_STACKDATAi
// Address: 0x2e4280 - 0x2e42d0
void ps2__CHR_SET_POS__FP12RS_STACKDATAi_0x2e4280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHR_SET_POS__FP12RS_STACKDATAi_0x2e4280");
#endif

    switch (ctx->pc) {
        case 0x2e4280u: goto label_2e4280;
        case 0x2e4284u: goto label_2e4284;
        case 0x2e4288u: goto label_2e4288;
        case 0x2e428cu: goto label_2e428c;
        case 0x2e4290u: goto label_2e4290;
        case 0x2e4294u: goto label_2e4294;
        case 0x2e4298u: goto label_2e4298;
        case 0x2e429cu: goto label_2e429c;
        case 0x2e42a0u: goto label_2e42a0;
        case 0x2e42a4u: goto label_2e42a4;
        case 0x2e42a8u: goto label_2e42a8;
        case 0x2e42acu: goto label_2e42ac;
        case 0x2e42b0u: goto label_2e42b0;
        case 0x2e42b4u: goto label_2e42b4;
        case 0x2e42b8u: goto label_2e42b8;
        case 0x2e42bcu: goto label_2e42bc;
        case 0x2e42c0u: goto label_2e42c0;
        case 0x2e42c4u: goto label_2e42c4;
        case 0x2e42c8u: goto label_2e42c8;
        case 0x2e42ccu: goto label_2e42cc;
        default: break;
    }

    ctx->pc = 0x2e4280u;

label_2e4280:
    // 0x2e4280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e4280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2e4284:
    // 0x2e4284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e4284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e4288:
    // 0x2e4288: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e428c:
    // 0x2e428c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e428cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e4290:
    // 0x2e4290: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e4294:
    if (ctx->pc == 0x2E4294u) {
        ctx->pc = 0x2E4294u;
            // 0x2e4294: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4298u;
        goto label_2e4298;
    }
    ctx->pc = 0x2E4290u;
    {
        const bool branch_taken_0x2e4290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4290u;
            // 0x2e4294: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4290) {
            ctx->pc = 0x2E42A0u;
            goto label_2e42a0;
        }
    }
    ctx->pc = 0x2E4298u;
label_2e4298:
    // 0x2e4298: 0x1000000a  b           . + 4 + (0xA << 2)
label_2e429c:
    if (ctx->pc == 0x2E429Cu) {
        ctx->pc = 0x2E429Cu;
            // 0x2e429c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E42A0u;
        goto label_2e42a0;
    }
    ctx->pc = 0x2E4298u;
    {
        const bool branch_taken_0x2e4298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E429Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4298u;
            // 0x2e429c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4298) {
            ctx->pc = 0x2E42C4u;
            goto label_2e42c4;
        }
    }
    ctx->pc = 0x2E42A0u;
label_2e42a0:
    // 0x2e42a0: 0xc0b8cbc  jal         func_2E32F0
label_2e42a4:
    if (ctx->pc == 0x2E42A4u) {
        ctx->pc = 0x2E42A4u;
            // 0x2e42a4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2E42A8u;
        goto label_2e42a8;
    }
    ctx->pc = 0x2E42A0u;
    SET_GPR_U32(ctx, 31, 0x2E42A8u);
    ctx->pc = 0x2E42A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E42A0u;
            // 0x2e42a4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E42A8u; }
        if (ctx->pc != 0x2E42A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E42A8u; }
        if (ctx->pc != 0x2E42A8u) { return; }
    }
    ctx->pc = 0x2E42A8u;
label_2e42a8:
    // 0x2e42a8: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e42a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e42ac:
    // 0x2e42ac: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2e42acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e42b0:
    // 0x2e42b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e42b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e42b4:
    // 0x2e42b4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2e42b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2e42b8:
    // 0x2e42b8: 0x320f809  jalr        $t9
label_2e42bc:
    if (ctx->pc == 0x2E42BCu) {
        ctx->pc = 0x2E42BCu;
            // 0x2e42bc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2E42C0u;
        goto label_2e42c0;
    }
    ctx->pc = 0x2E42B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E42C0u);
        ctx->pc = 0x2E42BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E42B8u;
            // 0x2e42bc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E42C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E42C0u; }
            if (ctx->pc != 0x2E42C0u) { return; }
        }
        }
    }
    ctx->pc = 0x2E42C0u;
label_2e42c0:
    // 0x2e42c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e42c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e42c4:
    // 0x2e42c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e42c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e42c8:
    // 0x2e42c8: 0x3e00008  jr          $ra
label_2e42cc:
    if (ctx->pc == 0x2E42CCu) {
        ctx->pc = 0x2E42CCu;
            // 0x2e42cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2E42D0u;
        goto label_fallthrough_0x2e42c8;
    }
    ctx->pc = 0x2E42C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E42CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E42C8u;
            // 0x2e42cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e42c8:
    ctx->pc = 0x2E42D0u;
}
