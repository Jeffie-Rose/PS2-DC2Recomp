#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetRef__12CActionCharaFP12CActionCharaPc
// Address: 0x16bd90 - 0x16be50
void SetRef__12CActionCharaFP12CActionCharaPc_0x16bd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetRef__12CActionCharaFP12CActionCharaPc_0x16bd90");
#endif

    switch (ctx->pc) {
        case 0x16bdd8u: goto label_16bdd8;
        case 0x16bdf4u: goto label_16bdf4;
        case 0x16be00u: goto label_16be00;
        case 0x16be0cu: goto label_16be0c;
        default: break;
    }

    ctx->pc = 0x16bd90u;

    // 0x16bd90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16bd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16bd94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16bd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16bd98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16bd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16bd9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16bd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16bda0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x16bda0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bda4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16bda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16bda8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16bda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16bdac: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x16BDACu;
    {
        const bool branch_taken_0x16bdac = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BDACu;
            // 0x16bdb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bdac) {
            ctx->pc = 0x16BDBCu;
            goto label_16bdbc;
        }
    }
    ctx->pc = 0x16BDB4u;
    // 0x16bdb4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x16BDB4u;
    {
        const bool branch_taken_0x16bdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BDB4u;
            // 0x16bdb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bdb4) {
            ctx->pc = 0x16BE34u;
            goto label_16be34;
        }
    }
    ctx->pc = 0x16BDBCu;
label_16bdbc:
    // 0x16bdbc: 0x8e720070  lw          $s2, 0x70($s3)
    ctx->pc = 0x16bdbcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x16bdc0: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x16BDC0u;
    {
        const bool branch_taken_0x16bdc0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BDC0u;
            // 0x16bdc4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bdc0) {
            ctx->pc = 0x16BDD0u;
            goto label_16bdd0;
        }
    }
    ctx->pc = 0x16BDC8u;
    // 0x16bdc8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x16BDC8u;
    {
        const bool branch_taken_0x16bdc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BDC8u;
            // 0x16bdcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bdc8) {
            ctx->pc = 0x16BE34u;
            goto label_16be34;
        }
    }
    ctx->pc = 0x16BDD0u;
label_16bdd0:
    // 0x16bdd0: 0xc05af3c  jal         func_16BCF0
    ctx->pc = 0x16BDD0u;
    SET_GPR_U32(ctx, 31, 0x16BDD8u);
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BDD8u; }
        if (ctx->pc != 0x16BDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BDD8u; }
        if (ctx->pc != 0x16BDD8u) { return; }
    }
    ctx->pc = 0x16BDD8u;
label_16bdd8:
    // 0x16bdd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16bdd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bddc: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16BDDCu;
    {
        const bool branch_taken_0x16bddc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BDDCu;
            // 0x16bde0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bddc) {
            ctx->pc = 0x16BDECu;
            goto label_16bdec;
        }
    }
    ctx->pc = 0x16BDE4u;
    // 0x16bde4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x16BDE4u;
    {
        const bool branch_taken_0x16bde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BDE4u;
            // 0x16bde8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bde4) {
            ctx->pc = 0x16BE34u;
            goto label_16be34;
        }
    }
    ctx->pc = 0x16BDECu;
label_16bdec:
    // 0x16bdec: 0xc04db18  jal         func_136C60
    ctx->pc = 0x16BDECu;
    SET_GPR_U32(ctx, 31, 0x16BDF4u);
    ctx->pc = 0x136C60u;
    if (runtime->hasFunction(0x136C60u)) {
        auto targetFn = runtime->lookupFunction(0x136C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BDF4u; }
        if (ctx->pc != 0x16BDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteReference__8mgCFrameFv_0x136c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BDF4u; }
        if (ctx->pc != 0x16BDF4u) { return; }
    }
    ctx->pc = 0x16BDF4u;
label_16bdf4:
    // 0x16bdf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16bdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bdf8: 0xc04db0c  jal         func_136C30
    ctx->pc = 0x16BDF8u;
    SET_GPR_U32(ctx, 31, 0x16BE00u);
    ctx->pc = 0x16BDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BDF8u;
            // 0x16bdfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C30u;
    if (runtime->hasFunction(0x136C30u)) {
        auto targetFn = runtime->lookupFunction(0x136C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BE00u; }
        if (ctx->pc != 0x16BE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetReference__8mgCFrameFP8mgCFrame_0x136c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BE00u; }
        if (ctx->pc != 0x16BE00u) { return; }
    }
    ctx->pc = 0x16BE00u;
label_16be00:
    // 0x16be00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16be00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16be04: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x16be04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be08: 0xa662068a  sh          $v0, 0x68A($s3)
    ctx->pc = 0x16be08u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1674), (uint16_t)GPR_U32(ctx, 2));
label_16be0c:
    // 0x16be0c: 0x8c620678  lw          $v0, 0x678($v1)
    ctx->pc = 0x16be0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1656)));
    // 0x16be10: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16BE10u;
    {
        const bool branch_taken_0x16be10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16be10) {
            ctx->pc = 0x16BE28u;
            goto label_16be28;
        }
    }
    ctx->pc = 0x16BE18u;
    // 0x16be18: 0xac730678  sw          $s3, 0x678($v1)
    ctx->pc = 0x16be18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1656), GPR_U32(ctx, 19));
    // 0x16be1c: 0x8c620678  lw          $v0, 0x678($v1)
    ctx->pc = 0x16be1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1656)));
    // 0x16be20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16BE20u;
    {
        const bool branch_taken_0x16be20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BE20u;
            // 0x16be24: 0xac500674  sw          $s0, 0x674($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1652), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be20) {
            ctx->pc = 0x16BE30u;
            goto label_16be30;
        }
    }
    ctx->pc = 0x16BE28u;
label_16be28:
    // 0x16be28: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x16BE28u;
    {
        const bool branch_taken_0x16be28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BE28u;
            // 0x16be2c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be28) {
            ctx->pc = 0x16BE0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16be0c;
        }
    }
    ctx->pc = 0x16BE30u;
label_16be30:
    // 0x16be30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16be30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16be34:
    // 0x16be34: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16be34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16be38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16be38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16be3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16be3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16be40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16be40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16be44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16be44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16be48: 0x3e00008  jr          $ra
    ctx->pc = 0x16BE48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BE48u;
            // 0x16be4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16BE50u;
}
