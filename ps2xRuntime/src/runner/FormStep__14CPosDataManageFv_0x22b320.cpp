#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FormStep__14CPosDataManageFv
// Address: 0x22b320 - 0x22b3a8
void FormStep__14CPosDataManageFv_0x22b320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FormStep__14CPosDataManageFv_0x22b320");
#endif

    switch (ctx->pc) {
        case 0x22b33cu: goto label_22b33c;
        case 0x22b348u: goto label_22b348;
        case 0x22b368u: goto label_22b368;
        default: break;
    }

    ctx->pc = 0x22b320u;

    // 0x22b320: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22b320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22b324: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22b324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22b328: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22b328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22b32c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22b32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22b330: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22b330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b334: 0xc08ac34  jal         func_22B0D0
    ctx->pc = 0x22B334u;
    SET_GPR_U32(ctx, 31, 0x22B33Cu);
    ctx->pc = 0x22B338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B334u;
            // 0x22b338: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B0D0u;
    if (runtime->hasFunction(0x22B0D0u)) {
        auto targetFn = runtime->lookupFunction(0x22B0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B33Cu; }
        if (ctx->pc != 0x22B33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawTopList__14CPosDataManageFv_0x22b0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B33Cu; }
        if (ctx->pc != 0x22B33Cu) { return; }
    }
    ctx->pc = 0x22B33Cu;
label_22b33c:
    // 0x22b33c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22b33cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b340: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x22B340u;
    {
        const bool branch_taken_0x22b340 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b340) {
            ctx->pc = 0x22B38Cu;
            goto label_22b38c;
        }
    }
    ctx->pc = 0x22B348u;
label_22b348:
    // 0x22b348: 0x9242001e  lbu         $v0, 0x1E($s2)
    ctx->pc = 0x22b348u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 30)));
    // 0x22b34c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B34Cu;
    {
        const bool branch_taken_0x22b34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B34Cu;
            // 0x22b350: 0x92110003  lbu         $s1, 0x3($s0) (Delay Slot)
        SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b34c) {
            ctx->pc = 0x22B35Cu;
            goto label_22b35c;
        }
    }
    ctx->pc = 0x22B354u;
    // 0x22b354: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22b354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b358: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x22b358u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
label_22b35c:
    // 0x22b35c: 0x0  nop
    ctx->pc = 0x22b35cu;
    // NOP
    // 0x22b360: 0xc08a178  jal         func_2285E0
    ctx->pc = 0x22B360u;
    SET_GPR_U32(ctx, 31, 0x22B368u);
    ctx->pc = 0x22B364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B360u;
            // 0x22b364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2285E0u;
    if (runtime->hasFunction(0x2285E0u)) {
        auto targetFn = runtime->lookupFunction(0x2285E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B368u; }
        if (ctx->pc != 0x22B368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuFormStep__16CMenuPosDataFormFv_0x2285e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B368u; }
        if (ctx->pc != 0x22B368u) { return; }
    }
    ctx->pc = 0x22B368u;
label_22b368:
    // 0x22b368: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x22B368u;
    {
        const bool branch_taken_0x22b368 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b368) {
            ctx->pc = 0x22B374u;
            goto label_22b374;
        }
    }
    ctx->pc = 0x22B370u;
    // 0x22b370: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x22b370u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_22b374:
    // 0x22b374: 0x0  nop
    ctx->pc = 0x22b374u;
    // NOP
    // 0x22b378: 0x8e100074  lw          $s0, 0x74($s0)
    ctx->pc = 0x22b378u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x22b37c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B37Cu;
    {
        const bool branch_taken_0x22b37c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b37c) {
            ctx->pc = 0x22B38Cu;
            goto label_22b38c;
        }
    }
    ctx->pc = 0x22B384u;
    // 0x22b384: 0x1600fff0  bnez        $s0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x22B384u;
    {
        const bool branch_taken_0x22b384 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b384) {
            ctx->pc = 0x22B348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b348;
        }
    }
    ctx->pc = 0x22B38Cu;
label_22b38c:
    // 0x22b38c: 0x0  nop
    ctx->pc = 0x22b38cu;
    // NOP
    // 0x22b390: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22b390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22b394: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22b394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b398: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22b398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b39c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22b39cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x22B3A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B3A0u;
            // 0x22b3a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22B3A8u;
}
