#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_BGM_VOL__FP12RS_STACKDATAi
// Address: 0x2738b0 - 0x273948
void ps2__SET_BGM_VOL__FP12RS_STACKDATAi_0x2738b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_BGM_VOL__FP12RS_STACKDATAi_0x2738b0");
#endif

    switch (ctx->pc) {
        case 0x2738d0u: goto label_2738d0;
        case 0x2738dcu: goto label_2738dc;
        case 0x2738f8u: goto label_2738f8;
        case 0x273904u: goto label_273904;
        case 0x273918u: goto label_273918;
        case 0x273924u: goto label_273924;
        default: break;
    }

    ctx->pc = 0x2738b0u;

    // 0x2738b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2738b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2738b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2738b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2738b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2738b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2738bc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2738bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2738c0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2738C0u;
    {
        const bool branch_taken_0x2738c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2738C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2738C0u;
            // 0x2738c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2738c0) {
            ctx->pc = 0x2738E4u;
            goto label_2738e4;
        }
    }
    ctx->pc = 0x2738C8u;
    // 0x2738c8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2738C8u;
    SET_GPR_U32(ctx, 31, 0x2738D0u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2738D0u; }
        if (ctx->pc != 0x2738D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2738D0u; }
        if (ctx->pc != 0x2738D0u) { return; }
    }
    ctx->pc = 0x2738D0u;
label_2738d0:
    // 0x2738d0: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x2738d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2738d4: 0xc0a98b8  jal         func_2A62E0
    ctx->pc = 0x2738D4u;
    SET_GPR_U32(ctx, 31, 0x2738DCu);
    ctx->pc = 0x2738D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2738D4u;
            // 0x2738d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A62E0u;
    if (runtime->hasFunction(0x2A62E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A62E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2738DCu; }
        if (ctx->pc != 0x2738DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVolBGM__6CSceneFi_0x2a62e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2738DCu; }
        if (ctx->pc != 0x2738DCu) { return; }
    }
    ctx->pc = 0x2738DCu;
label_2738dc:
    // 0x2738dc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2738DCu;
    {
        const bool branch_taken_0x2738dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2738E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2738DCu;
            // 0x2738e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2738dc) {
            ctx->pc = 0x273938u;
            goto label_273938;
        }
    }
    ctx->pc = 0x2738E4u;
label_2738e4:
    // 0x2738e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2738e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2738e8: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2738E8u;
    {
        const bool branch_taken_0x2738e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2738ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2738E8u;
            // 0x2738ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2738e8) {
            ctx->pc = 0x27392Cu;
            goto label_27392c;
        }
    }
    ctx->pc = 0x2738F0u;
    // 0x2738f0: 0xc0a98d4  jal         func_2A6350
    ctx->pc = 0x2738F0u;
    SET_GPR_U32(ctx, 31, 0x2738F8u);
    ctx->pc = 0x2738F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2738F0u;
            // 0x2738f4: 0x8f8497dc  lw          $a0, -0x6824($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6350u;
    if (runtime->hasFunction(0x2A6350u)) {
        auto targetFn = runtime->lookupFunction(0x2A6350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2738F8u; }
        if (ctx->pc != 0x2738F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetVolBGM__6CSceneFv_0x2a6350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2738F8u; }
        if (ctx->pc != 0x2738F8u) { return; }
    }
    ctx->pc = 0x2738F8u;
label_2738f8:
    // 0x2738f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2738f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2738fc: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x2738FCu;
    SET_GPR_U32(ctx, 31, 0x273904u);
    ctx->pc = 0x273900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2738FCu;
            // 0x273900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273904u; }
        if (ctx->pc != 0x273904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273904u; }
        if (ctx->pc != 0x273904u) { return; }
    }
    ctx->pc = 0x273904u;
label_273904:
    // 0x273904: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x273904u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x273908: 0x0  nop
    ctx->pc = 0x273908u;
    // NOP
    // 0x27390c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x27390cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x273910: 0xc0a248c  jal         func_289230
    ctx->pc = 0x273910u;
    SET_GPR_U32(ctx, 31, 0x273918u);
    ctx->pc = 0x273914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273910u;
            // 0x273914: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273918u; }
        if (ctx->pc != 0x273918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273918u; }
        if (ctx->pc != 0x273918u) { return; }
    }
    ctx->pc = 0x273918u;
label_273918:
    // 0x273918: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x273918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27391c: 0xc0a98b8  jal         func_2A62E0
    ctx->pc = 0x27391Cu;
    SET_GPR_U32(ctx, 31, 0x273924u);
    ctx->pc = 0x273920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27391Cu;
            // 0x273920: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A62E0u;
    if (runtime->hasFunction(0x2A62E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A62E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273924u; }
        if (ctx->pc != 0x273924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVolBGM__6CSceneFi_0x2a62e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273924u; }
        if (ctx->pc != 0x273924u) { return; }
    }
    ctx->pc = 0x273924u;
label_273924:
    // 0x273924: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x273924u;
    {
        const bool branch_taken_0x273924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273924) {
            ctx->pc = 0x273934u;
            goto label_273934;
        }
    }
    ctx->pc = 0x27392Cu;
label_27392c:
    // 0x27392c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27392Cu;
    {
        const bool branch_taken_0x27392c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27392Cu;
            // 0x273930: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27392c) {
            ctx->pc = 0x27393Cu;
            goto label_27393c;
        }
    }
    ctx->pc = 0x273934u;
label_273934:
    // 0x273934: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_273938:
    // 0x273938: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x273938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_27393c:
    // 0x27393c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27393cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273940: 0x3e00008  jr          $ra
    ctx->pc = 0x273940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273940u;
            // 0x273944: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273948u;
}
