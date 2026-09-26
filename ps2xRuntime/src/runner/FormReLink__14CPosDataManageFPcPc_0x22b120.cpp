#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FormReLink__14CPosDataManageFPcPc
// Address: 0x22b120 - 0x22b1d8
void FormReLink__14CPosDataManageFPcPc_0x22b120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FormReLink__14CPosDataManageFPcPc_0x22b120");
#endif

    switch (ctx->pc) {
        case 0x22b13cu: goto label_22b13c;
        case 0x22b14cu: goto label_22b14c;
        default: break;
    }

    ctx->pc = 0x22b120u;

    // 0x22b120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22b120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22b124: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22b124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22b128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22b128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22b12c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22b12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22b130: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22b130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b134: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x22B134u;
    SET_GPR_U32(ctx, 31, 0x22B13Cu);
    ctx->pc = 0x22B138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B134u;
            // 0x22b138: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B13Cu; }
        if (ctx->pc != 0x22B13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B13Cu; }
        if (ctx->pc != 0x22B13Cu) { return; }
    }
    ctx->pc = 0x22B13Cu;
label_22b13c:
    // 0x22b13c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22b13cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b140: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b144: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x22B144u;
    SET_GPR_U32(ctx, 31, 0x22B14Cu);
    ctx->pc = 0x22B148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B144u;
            // 0x22b148: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B14Cu; }
        if (ctx->pc != 0x22B14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B14Cu; }
        if (ctx->pc != 0x22B14Cu) { return; }
    }
    ctx->pc = 0x22B14Cu;
label_22b14c:
    // 0x22b14c: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x22B14Cu;
    {
        const bool branch_taken_0x22b14c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b14c) {
            ctx->pc = 0x22B1C4u;
            goto label_22b1c4;
        }
    }
    ctx->pc = 0x22B154u;
    // 0x22b154: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B154u;
    {
        const bool branch_taken_0x22b154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b154) {
            ctx->pc = 0x22B164u;
            goto label_22b164;
        }
    }
    ctx->pc = 0x22B15Cu;
    // 0x22b15c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x22B15Cu;
    {
        const bool branch_taken_0x22b15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B15Cu;
            // 0x22b160: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b15c) {
            ctx->pc = 0x22B1C8u;
            goto label_22b1c8;
        }
    }
    ctx->pc = 0x22B164u;
label_22b164:
    // 0x22b164: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x22b164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x22b168: 0x8e050074  lw          $a1, 0x74($s0)
    ctx->pc = 0x22b168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x22b16c: 0x8c430070  lw          $v1, 0x70($v0)
    ctx->pc = 0x22b16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x22b170: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x22b170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x22b174: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x22b174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x22b178: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x22b178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x22b17c: 0xac440070  sw          $a0, 0x70($v0)
    ctx->pc = 0x22b17cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 4));
    // 0x22b180: 0xac450074  sw          $a1, 0x74($v0)
    ctx->pc = 0x22b180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 5));
    // 0x22b184: 0x8c430070  lw          $v1, 0x70($v0)
    ctx->pc = 0x22b184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x22b188: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x22B188u;
    {
        const bool branch_taken_0x22b188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b188) {
            ctx->pc = 0x22B194u;
            goto label_22b194;
        }
    }
    ctx->pc = 0x22B190u;
    // 0x22b190: 0xac620074  sw          $v0, 0x74($v1)
    ctx->pc = 0x22b190u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 2));
label_22b194:
    // 0x22b194: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x22b194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x22b198: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x22B198u;
    {
        const bool branch_taken_0x22b198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b198) {
            ctx->pc = 0x22B1A4u;
            goto label_22b1a4;
        }
    }
    ctx->pc = 0x22B1A0u;
    // 0x22b1a0: 0xac620070  sw          $v0, 0x70($v1)
    ctx->pc = 0x22b1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 2));
label_22b1a4:
    // 0x22b1a4: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x22b1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x22b1a8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x22B1A8u;
    {
        const bool branch_taken_0x22b1a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b1a8) {
            ctx->pc = 0x22B1B4u;
            goto label_22b1b4;
        }
    }
    ctx->pc = 0x22B1B0u;
    // 0x22b1b0: 0xac700070  sw          $s0, 0x70($v1)
    ctx->pc = 0x22b1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 16));
label_22b1b4:
    // 0x22b1b4: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x22b1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x22b1b8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x22B1B8u;
    {
        const bool branch_taken_0x22b1b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b1b8) {
            ctx->pc = 0x22B1C4u;
            goto label_22b1c4;
        }
    }
    ctx->pc = 0x22B1C0u;
    // 0x22b1c0: 0xac700074  sw          $s0, 0x74($v1)
    ctx->pc = 0x22b1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 16));
label_22b1c4:
    // 0x22b1c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22b1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22b1c8:
    // 0x22b1c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22b1c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b1cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22b1ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x22B1D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B1D0u;
            // 0x22b1d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22B1D8u;
}
