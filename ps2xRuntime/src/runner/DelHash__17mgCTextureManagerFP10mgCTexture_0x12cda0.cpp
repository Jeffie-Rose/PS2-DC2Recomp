#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DelHash__17mgCTextureManagerFP10mgCTexture
// Address: 0x12cda0 - 0x12ce88
void DelHash__17mgCTextureManagerFP10mgCTexture_0x12cda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DelHash__17mgCTextureManagerFP10mgCTexture_0x12cda0");
#endif

    switch (ctx->pc) {
        case 0x12cdccu: goto label_12cdcc;
        case 0x12cdecu: goto label_12cdec;
        default: break;
    }

    ctx->pc = 0x12cda0u;

    // 0x12cda0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12cda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12cda4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12cda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12cda8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12cda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12cdac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12cdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12cdb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12cdb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cdb4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12cdb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cdb8: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x12CDB8u;
    {
        const bool branch_taken_0x12cdb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cdb8) {
            ctx->pc = 0x12CE70u;
            goto label_12ce70;
        }
    }
    ctx->pc = 0x12CDC0u;
    // 0x12cdc0: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x12cdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x12cdc4: 0xc04b31c  jal         func_12CC70
    ctx->pc = 0x12CDC4u;
    SET_GPR_U32(ctx, 31, 0x12CDCCu);
    ctx->pc = 0x12CC70u;
    if (runtime->hasFunction(0x12CC70u)) {
        auto targetFn = runtime->lookupFunction(0x12CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CDCCu; }
        if (ctx->pc != 0x12CDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        hash__17mgCTextureManagerFPc_0x12cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CDCCu; }
        if (ctx->pc != 0x12CDCCu) { return; }
    }
    ctx->pc = 0x12CDCCu;
label_12cdcc:
    // 0x12cdcc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x12cdccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12cdd0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x12cdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x12cdd4: 0x24670024  addiu       $a3, $v1, 0x24
    ctx->pc = 0x12cdd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x12cdd8: 0x8c640024  lw          $a0, 0x24($v1)
    ctx->pc = 0x12cdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x12cddc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12cddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cde0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12cde0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cde4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12CDE4u;
    {
        const bool branch_taken_0x12cde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cde4) {
            ctx->pc = 0x12CE14u;
            goto label_12ce14;
        }
    }
    ctx->pc = 0x12CDECu;
label_12cdec:
    // 0x12cdec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x12cdecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12cdf0: 0x14700004  bne         $v1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CDF0u;
    {
        const bool branch_taken_0x12cdf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x12cdf0) {
            ctx->pc = 0x12CE04u;
            goto label_12ce04;
        }
    }
    ctx->pc = 0x12CDF8u;
    // 0x12cdf8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x12cdf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cdfc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12CDFCu;
    {
        const bool branch_taken_0x12cdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cdfc) {
            ctx->pc = 0x12CE20u;
            goto label_12ce20;
        }
    }
    ctx->pc = 0x12CE04u;
label_12ce04:
    // 0x12ce04: 0x0  nop
    ctx->pc = 0x12ce04u;
    // NOP
    // 0x12ce08: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x12ce08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ce0c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x12ce0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12ce10: 0x0  nop
    ctx->pc = 0x12ce10u;
    // NOP
label_12ce14:
    // 0x12ce14: 0x0  nop
    ctx->pc = 0x12ce14u;
    // NOP
    // 0x12ce18: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x12CE18u;
    {
        const bool branch_taken_0x12ce18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ce18) {
            ctx->pc = 0x12CDECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cdec;
        }
    }
    ctx->pc = 0x12CE20u;
label_12ce20:
    // 0x12ce20: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x12CE20u;
    {
        const bool branch_taken_0x12ce20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ce20) {
            ctx->pc = 0x12CE70u;
            goto label_12ce70;
        }
    }
    ctx->pc = 0x12CE28u;
    // 0x12ce28: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12CE28u;
    {
        const bool branch_taken_0x12ce28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ce28) {
            ctx->pc = 0x12CE40u;
            goto label_12ce40;
        }
    }
    ctx->pc = 0x12CE30u;
    // 0x12ce30: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x12ce30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x12ce34: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x12ce34u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x12ce38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12CE38u;
    {
        const bool branch_taken_0x12ce38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ce38) {
            ctx->pc = 0x12CE48u;
            goto label_12ce48;
        }
    }
    ctx->pc = 0x12CE40u;
label_12ce40:
    // 0x12ce40: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x12ce40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x12ce44: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x12ce44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_12ce48:
    // 0x12ce48: 0x8e2301d4  lw          $v1, 0x1D4($s1)
    ctx->pc = 0x12ce48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x12ce4c: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12CE4Cu;
    {
        const bool branch_taken_0x12ce4c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x12ce4c) {
            ctx->pc = 0x12CE70u;
            goto label_12ce70;
        }
    }
    ctx->pc = 0x12CE54u;
    // 0x12ce54: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12ce54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12ce58: 0xae2301d4  sw          $v1, 0x1D4($s1)
    ctx->pc = 0x12ce58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 3));
    // 0x12ce5c: 0x8e2301d4  lw          $v1, 0x1D4($s1)
    ctx->pc = 0x12ce5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x12ce60: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x12ce60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12ce64: 0x8e2301cc  lw          $v1, 0x1CC($s1)
    ctx->pc = 0x12ce64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
    // 0x12ce68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12ce68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12ce6c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x12ce6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_12ce70:
    // 0x12ce70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12ce70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ce74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12ce74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ce78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12ce78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ce7c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12ce7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12ce80: 0x3e00008  jr          $ra
    ctx->pc = 0x12CE80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12CE88u;
}
