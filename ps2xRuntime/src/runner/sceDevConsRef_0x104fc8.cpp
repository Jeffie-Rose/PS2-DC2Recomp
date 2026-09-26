#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceDevConsRef
// Address: 0x104fc8 - 0x105064
void sceDevConsRef_0x104fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsRef_0x104fc8");
#endif

    switch (ctx->pc) {
        case 0x105010u: goto label_105010;
        case 0x10502cu: goto label_10502c;
        default: break;
    }

    ctx->pc = 0x104fc8u;

    // 0x104fc8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x104fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x104fcc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x104fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x104fd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104fd4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x104fd4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104fd8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x104fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x104fdc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x104fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104fe0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x104fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x104fe4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x104fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x104fe8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x104fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x104fec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x104fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x104ff0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x104ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x104ff4: 0x8c950004  lw          $s5, 0x4($a0)
    ctx->pc = 0x104ff4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x104ff8: 0x8c940000  lw          $s4, 0x0($a0)
    ctx->pc = 0x104ff8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x104ffc: 0x12a0000f  beqz        $s5, . + 4 + (0xF << 2)
    ctx->pc = 0x104FFCu;
    {
        const bool branch_taken_0x104ffc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x105000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104FFCu;
            // 0x105000: 0x8c910008  lw          $s1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ffc) {
            ctx->pc = 0x10503Cu;
            goto label_10503c;
        }
    }
    ctx->pc = 0x105004u;
    // 0x105004: 0x24930018  addiu       $s3, $a0, 0x18
    ctx->pc = 0x105004u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x105008: 0x149040  sll         $s2, $s4, 1
    ctx->pc = 0x105008u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x10500c: 0x0  nop
    ctx->pc = 0x10500cu;
    // NOP
label_105010:
    // 0x105010: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x105010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105014: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x105014u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105018: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x105018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10501c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10501cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105020: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x105020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105024: 0xc0417e8  jal         func_105FA0
    ctx->pc = 0x105024u;
    SET_GPR_U32(ctx, 31, 0x10502Cu);
    ctx->pc = 0x105028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105024u;
            // 0x105028: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105FA0u;
    if (runtime->hasFunction(0x105FA0u)) {
        auto targetFn = runtime->lookupFunction(0x105FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10502Cu; }
        if (ctx->pc != 0x10502Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevFontRefStrN_0x105fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10502Cu; }
        if (ctx->pc != 0x10502Cu) { return; }
    }
    ctx->pc = 0x10502Cu;
label_10502c:
    // 0x10502c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10502cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x105030: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x105030u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x105034: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x105034u;
    {
        const bool branch_taken_0x105034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105034u;
            // 0x105038: 0x2328821  addu        $s1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105034) {
            ctx->pc = 0x105010u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_105010;
        }
    }
    ctx->pc = 0x10503Cu;
label_10503c:
    // 0x10503c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x10503cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x105040: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x105040u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x105044: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x105044u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x105048: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x105048u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10504c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10504cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x105050: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x105050u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105054: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x105054u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105058: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10505c: 0x3e00008  jr          $ra
    ctx->pc = 0x10505Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10505Cu;
            // 0x105060: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x105064u;
}
