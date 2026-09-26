#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DivPathNameExt__FPcPcPcPc
// Address: 0x14a110 - 0x14a188
void DivPathNameExt__FPcPcPcPc_0x14a110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DivPathNameExt__FPcPcPcPc_0x14a110");
#endif

    switch (ctx->pc) {
        case 0x14a12cu: goto label_14a12c;
        case 0x14a134u: goto label_14a134;
        case 0x14a174u: goto label_14a174;
        default: break;
    }

    ctx->pc = 0x14a110u;

    // 0x14a110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14a110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14a114: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14a114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14a118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14a118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14a11c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14a11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14a120: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x14a120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a124: 0xc0527f4  jal         func_149FD0
    ctx->pc = 0x14A124u;
    SET_GPR_U32(ctx, 31, 0x14A12Cu);
    ctx->pc = 0x14A128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A124u;
            // 0x14a128: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149FD0u;
    if (runtime->hasFunction(0x149FD0u)) {
        auto targetFn = runtime->lookupFunction(0x149FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A12Cu; }
        if (ctx->pc != 0x14A12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DivPathName__FPcPcPc_0x149fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A12Cu; }
        if (ctx->pc != 0x14A12Cu) { return; }
    }
    ctx->pc = 0x14A12Cu;
label_14a12c:
    // 0x14a12c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14A12Cu;
    {
        const bool branch_taken_0x14a12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A12Cu;
            // 0x14a130: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a12c) {
            ctx->pc = 0x14A154u;
            goto label_14a154;
        }
    }
    ctx->pc = 0x14A134u;
label_14a134:
    // 0x14a134: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x14a134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x14a138: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x14a138u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x14a13c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A13Cu;
    {
        const bool branch_taken_0x14a13c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14a13c) {
            ctx->pc = 0x14A150u;
            goto label_14a150;
        }
    }
    ctx->pc = 0x14A144u;
    // 0x14a144: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x14a144u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14a148: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14A148u;
    {
        const bool branch_taken_0x14a148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A148u;
            // 0x14a14c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a148) {
            ctx->pc = 0x14A164u;
            goto label_14a164;
        }
    }
    ctx->pc = 0x14A150u;
label_14a150:
    // 0x14a150: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14a150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_14a154:
    // 0x14a154: 0x0  nop
    ctx->pc = 0x14a154u;
    // NOP
    // 0x14a158: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x14a158u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14a15c: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x14A15Cu;
    {
        const bool branch_taken_0x14a15c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a15c) {
            ctx->pc = 0x14A134u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14a134;
        }
    }
    ctx->pc = 0x14A164u;
label_14a164:
    // 0x14a164: 0x0  nop
    ctx->pc = 0x14a164u;
    // NOP
    // 0x14a168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a16c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x14A16Cu;
    SET_GPR_U32(ctx, 31, 0x14A174u);
    ctx->pc = 0x14A170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A16Cu;
            // 0x14a170: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A174u; }
        if (ctx->pc != 0x14A174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A174u; }
        if (ctx->pc != 0x14A174u) { return; }
    }
    ctx->pc = 0x14A174u;
label_14a174:
    // 0x14a174: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14a174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a178: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14a178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a17c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14a17cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a180: 0x3e00008  jr          $ra
    ctx->pc = 0x14A180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A180u;
            // 0x14a184: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14A188u;
}
