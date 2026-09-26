#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_OBJ__FP12RS_STACKDATAi
// Address: 0x1e3240 - 0x1e3290
void ps2__SET_OBJ__FP12RS_STACKDATAi_0x1e3240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_OBJ__FP12RS_STACKDATAi_0x1e3240");
#endif

    switch (ctx->pc) {
        case 0x1e3264u: goto label_1e3264;
        case 0x1e3270u: goto label_1e3270;
        case 0x1e327cu: goto label_1e327c;
        default: break;
    }

    ctx->pc = 0x1e3240u;

    // 0x1e3240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3244: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e3244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e3248: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e324c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E324Cu;
    {
        const bool branch_taken_0x1e324c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E3250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E324Cu;
            // 0x1e3250: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e324c) {
            ctx->pc = 0x1E325Cu;
            goto label_1e325c;
        }
    }
    ctx->pc = 0x1E3254u;
    // 0x1e3254: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E3254u;
    {
        const bool branch_taken_0x1e3254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3254u;
            // 0x1e3258: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3254) {
            ctx->pc = 0x1E3280u;
            goto label_1e3280;
        }
    }
    ctx->pc = 0x1E325Cu;
label_1e325c:
    // 0x1e325c: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E325Cu;
    SET_GPR_U32(ctx, 31, 0x1E3264u);
    ctx->pc = 0x1E3260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E325Cu;
            // 0x1e3260: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3264u; }
        if (ctx->pc != 0x1E3264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3264u; }
        if (ctx->pc != 0x1E3264u) { return; }
    }
    ctx->pc = 0x1E3264u;
label_1e3264:
    // 0x1e3264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3268: 0xc0781b8  jal         func_1E06E0
    ctx->pc = 0x1E3268u;
    SET_GPR_U32(ctx, 31, 0x1E3270u);
    ctx->pc = 0x1E326Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3268u;
            // 0x1e326c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06E0u;
    if (runtime->hasFunction(0x1E06E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3270u; }
        if (ctx->pc != 0x1E3270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x1e06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3270u; }
        if (ctx->pc != 0x1E3270u) { return; }
    }
    ctx->pc = 0x1E3270u;
label_1e3270:
    // 0x1e3270: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e3270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e3274: 0xc05a944  jal         func_16A510
    ctx->pc = 0x1E3274u;
    SET_GPR_U32(ctx, 31, 0x1E327Cu);
    ctx->pc = 0x1E3278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3274u;
            // 0x1e3278: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A510u;
    if (runtime->hasFunction(0x16A510u)) {
        auto targetFn = runtime->lookupFunction(0x16A510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E327Cu; }
        if (ctx->pc != 0x1E327Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EntryObject__12CActionCharaFPci_0x16a510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E327Cu; }
        if (ctx->pc != 0x1E327Cu) { return; }
    }
    ctx->pc = 0x1E327Cu;
label_1e327c:
    // 0x1e327c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e327cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e3280:
    // 0x1e3280: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e3280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3284: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3288: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E328Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3288u;
            // 0x1e328c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3290u;
}
