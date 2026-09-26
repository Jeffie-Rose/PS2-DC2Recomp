#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SkipSpace__FR9input_str
// Address: 0x147280 - 0x1472f8
void SkipSpace__FR9input_str_0x147280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SkipSpace__FR9input_str_0x147280");
#endif

    switch (ctx->pc) {
        case 0x1472a4u: goto label_1472a4;
        case 0x1472acu: goto label_1472ac;
        default: break;
    }

    ctx->pc = 0x147280u;

    // 0x147280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x147280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x147284: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x147284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x147288: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x147288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14728c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14728cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x147290: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x147290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x147294: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x147294u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x147298: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x147298u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14729c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14729Cu;
    {
        const bool branch_taken_0x14729c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1472A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14729Cu;
            // 0x1472a0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14729c) {
            ctx->pc = 0x1472B8u;
            goto label_1472b8;
        }
    }
    ctx->pc = 0x1472A4u;
label_1472a4:
    // 0x1472a4: 0xc051cc0  jal         func_147300
    ctx->pc = 0x1472A4u;
    SET_GPR_U32(ctx, 31, 0x1472ACu);
    ctx->pc = 0x1472A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1472A4u;
            // 0x1472a8: 0x80440000  lb          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x147300u;
    if (runtime->hasFunction(0x147300u)) {
        auto targetFn = runtime->lookupFunction(0x147300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1472ACu; }
        if (ctx->pc != 0x1472ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckChar__Fc_0x147300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1472ACu; }
        if (ctx->pc != 0x1472ACu) { return; }
    }
    ctx->pc = 0x1472ACu;
label_1472ac:
    // 0x1472ac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1472ACu;
    {
        const bool branch_taken_0x1472ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1472ac) {
            ctx->pc = 0x1472C8u;
            goto label_1472c8;
        }
    }
    ctx->pc = 0x1472B4u;
    // 0x1472b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1472b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1472b8:
    // 0x1472b8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1472b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1472bc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1472bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1472c0: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1472C0u;
    {
        const bool branch_taken_0x1472c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1472C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1472C0u;
            // 0x1472c4: 0x2111021  addu        $v0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1472c0) {
            ctx->pc = 0x1472A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1472a4;
        }
    }
    ctx->pc = 0x1472C8u;
label_1472c8:
    // 0x1472c8: 0xae510008  sw          $s1, 0x8($s2)
    ctx->pc = 0x1472c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 17));
    // 0x1472cc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1472ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1472d0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1472d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1472d4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1472D4u;
    {
        const bool branch_taken_0x1472d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1472D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1472D4u;
            // 0x1472d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1472d4) {
            ctx->pc = 0x1472E0u;
            goto label_1472e0;
        }
    }
    ctx->pc = 0x1472DCu;
    // 0x1472dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1472dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1472e0:
    // 0x1472e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1472e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1472e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1472e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1472e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1472e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1472ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1472ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1472f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1472F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1472F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1472F0u;
            // 0x1472f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1472F8u;
}
