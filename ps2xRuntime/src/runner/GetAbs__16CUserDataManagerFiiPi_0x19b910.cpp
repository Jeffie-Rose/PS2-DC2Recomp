#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetAbs__16CUserDataManagerFiiPi
// Address: 0x19b910 - 0x19b99c
void GetAbs__16CUserDataManagerFiiPi_0x19b910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetAbs__16CUserDataManagerFiiPi_0x19b910");
#endif

    switch (ctx->pc) {
        case 0x19b940u: goto label_19b940;
        case 0x19b948u: goto label_19b948;
        case 0x19b958u: goto label_19b958;
        case 0x19b97cu: goto label_19b97c;
        case 0x19b988u: goto label_19b988;
        default: break;
    }

    ctx->pc = 0x19b910u;

    // 0x19b910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19b910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19b914: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19b914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b918: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19b918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19b91c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19b91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19b920: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19b920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19b924: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19B924u;
    {
        const bool branch_taken_0x19b924 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x19B928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B924u;
            // 0x19b928: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b924) {
            ctx->pc = 0x19B950u;
            goto label_19b950;
        }
    }
    ctx->pc = 0x19B92Cu;
    // 0x19b92c: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19B92Cu;
    {
        const bool branch_taken_0x19b92c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b92c) {
            ctx->pc = 0x19B938u;
            goto label_19b938;
        }
    }
    ctx->pc = 0x19B934u;
    // 0x19b934: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x19b934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_19b938:
    // 0x19b938: 0xc067158  jal         func_19C560
    ctx->pc = 0x19B938u;
    SET_GPR_U32(ctx, 31, 0x19B940u);
    ctx->pc = 0x19C560u;
    if (runtime->hasFunction(0x19C560u)) {
        auto targetFn = runtime->lookupFunction(0x19C560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B940u; }
        if (ctx->pc != 0x19B940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoboAbs__16CUserDataManagerFv_0x19c560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B940u; }
        if (ctx->pc != 0x19B940u) { return; }
    }
    ctx->pc = 0x19B940u;
label_19b940:
    // 0x19b940: 0xc0a248c  jal         func_289230
    ctx->pc = 0x19B940u;
    SET_GPR_U32(ctx, 31, 0x19B948u);
    ctx->pc = 0x19B944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B940u;
            // 0x19b944: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B948u; }
        if (ctx->pc != 0x19B948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B948u; }
        if (ctx->pc != 0x19B948u) { return; }
    }
    ctx->pc = 0x19B948u;
label_19b948:
    // 0x19b948: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x19B948u;
    {
        const bool branch_taken_0x19b948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B948u;
            // 0x19b94c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b948) {
            ctx->pc = 0x19B98Cu;
            goto label_19b98c;
        }
    }
    ctx->pc = 0x19B950u;
label_19b950:
    // 0x19b950: 0xc066dbc  jal         func_19B6F0
    ctx->pc = 0x19B950u;
    SET_GPR_U32(ctx, 31, 0x19B958u);
    ctx->pc = 0x19B6F0u;
    if (runtime->hasFunction(0x19B6F0u)) {
        auto targetFn = runtime->lookupFunction(0x19B6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B958u; }
        if (ctx->pc != 0x19B958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAbsGage__16CUserDataManagerFii_0x19b6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B958u; }
        if (ctx->pc != 0x19B958u) { return; }
    }
    ctx->pc = 0x19B958u;
label_19b958:
    // 0x19b958: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19b958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b95c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B95Cu;
    {
        const bool branch_taken_0x19b95c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B95Cu;
            // 0x19b960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b95c) {
            ctx->pc = 0x19B96Cu;
            goto label_19b96c;
        }
    }
    ctx->pc = 0x19B964u;
    // 0x19b964: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19B964u;
    {
        const bool branch_taken_0x19b964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b964) {
            ctx->pc = 0x19B988u;
            goto label_19b988;
        }
    }
    ctx->pc = 0x19B96Cu;
label_19b96c:
    // 0x19b96c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B96Cu;
    {
        const bool branch_taken_0x19b96c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b96c) {
            ctx->pc = 0x19B980u;
            goto label_19b980;
        }
    }
    ctx->pc = 0x19B974u;
    // 0x19b974: 0xc0a248c  jal         func_289230
    ctx->pc = 0x19B974u;
    SET_GPR_U32(ctx, 31, 0x19B97Cu);
    ctx->pc = 0x19B978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B974u;
            // 0x19b978: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B97Cu; }
        if (ctx->pc != 0x19B97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B97Cu; }
        if (ctx->pc != 0x19B97Cu) { return; }
    }
    ctx->pc = 0x19B97Cu;
label_19b97c:
    // 0x19b97c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x19b97cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_19b980:
    // 0x19b980: 0xc0a248c  jal         func_289230
    ctx->pc = 0x19B980u;
    SET_GPR_U32(ctx, 31, 0x19B988u);
    ctx->pc = 0x19B984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B980u;
            // 0x19b984: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B988u; }
        if (ctx->pc != 0x19B988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B988u; }
        if (ctx->pc != 0x19B988u) { return; }
    }
    ctx->pc = 0x19B988u;
label_19b988:
    // 0x19b988: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19b988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19b98c:
    // 0x19b98c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19b98cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b990: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19b990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b994: 0x3e00008  jr          $ra
    ctx->pc = 0x19B994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B994u;
            // 0x19b998: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B99Cu;
}
