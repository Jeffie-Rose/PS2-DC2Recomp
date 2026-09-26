#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _send_to_iop
// Address: 0x121010 - 0x121124
void _send_to_iop_0x121010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_send_to_iop_0x121010");
#endif

    switch (ctx->pc) {
        case 0x121068u: goto label_121068;
        case 0x1210b4u: goto label_1210b4;
        case 0x1210d4u: goto label_1210d4;
        case 0x1210f8u: goto label_1210f8;
        default: break;
    }

    ctx->pc = 0x121010u;

    // 0x121010: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x121010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x121014: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x121014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x121018: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x121018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x12101c: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x12101cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x121020: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x121020u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121024: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x121024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121028: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x121028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x12102c: 0x72442018  mult1       $a0, $s2, $a0
    ctx->pc = 0x12102cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x121030: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x121030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x121034: 0xffb30130  sd          $s3, 0x130($sp)
    ctx->pc = 0x121034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x121038: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x121038u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x12103c: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x12103cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x121040: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x121040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x121044: 0x2662e4d0  addiu       $v0, $s3, -0x1B30
    ctx->pc = 0x121044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294960336));
    // 0x121048: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x121048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12104c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x12104cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x121050: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x121050u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121054: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x121054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x121058: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x121058u;
    {
        const bool branch_taken_0x121058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12105Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121058u;
            // 0x12105c: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121058) {
            ctx->pc = 0x121070u;
            goto label_121070;
        }
    }
    ctx->pc = 0x121060u;
    // 0x121060: 0xc044120  jal         func_110480
    ctx->pc = 0x121060u;
    SET_GPR_U32(ctx, 31, 0x121068u);
    ctx->pc = 0x110480u;
    if (runtime->hasFunction(0x110480u)) {
        auto targetFn = runtime->lookupFunction(0x110480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121068u; }
        if (ctx->pc != 0x121068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifDmaStat_0x110480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121068u; }
        if (ctx->pc != 0x121068u) { return; }
    }
    ctx->pc = 0x121068u;
label_121068:
    // 0x121068: 0x441001e  bgez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x121068u;
    {
        const bool branch_taken_0x121068 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12106Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121068u;
            // 0x12106c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121068) {
            ctx->pc = 0x1210E4u;
            goto label_1210e4;
        }
    }
    ctx->pc = 0x121070u;
label_121070:
    // 0x121070: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x121070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x121074: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x121074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x121078: 0x2073818  mult        $a3, $s0, $a3
    ctx->pc = 0x121078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x12107c: 0x72431818  mult1       $v1, $s2, $v1
    ctx->pc = 0x12107cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x121080: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x121080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x121084: 0x2673e4d0  addiu       $s3, $s3, -0x1B30
    ctx->pc = 0x121084u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294960336));
    // 0x121088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x121088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12108c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x12108cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x121090: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x121090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x121094: 0xe39021  addu        $s2, $a3, $v1
    ctx->pc = 0x121094u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x121098: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x121098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x12109c: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x12109cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1210a0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1210a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1210a4: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x1210a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1210a8: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x1210a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x1210ac: 0xc044276  jal         func_1109D8
    ctx->pc = 0x1210ACu;
    SET_GPR_U32(ctx, 31, 0x1210B4u);
    ctx->pc = 0x1210B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1210ACu;
            // 0x1210b0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1109D8u;
    if (runtime->hasFunction(0x1109D8u)) {
        auto targetFn = runtime->lookupFunction(0x1109D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1210B4u; }
        if (ctx->pc != 0x1210B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SyncDCache_0x1109d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1210B4u; }
        if (ctx->pc != 0x1210B4u) { return; }
    }
    ctx->pc = 0x1210B4u;
label_1210b4:
    // 0x1210b4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1210b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1210b8: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x1210b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x1210bc: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1210bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x1210c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1210c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1210c4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1210c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1210c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1210c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1210cc: 0xc044128  jal         func_1104A0
    ctx->pc = 0x1210CCu;
    SET_GPR_U32(ctx, 31, 0x1210D4u);
    ctx->pc = 0x1210D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1210CCu;
            // 0x1210d0: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1104A0u;
    if (runtime->hasFunction(0x1104A0u)) {
        auto targetFn = runtime->lookupFunction(0x1104A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1210D4u; }
        if (ctx->pc != 0x1210D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifSetDma_0x1104a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1210D4u; }
        if (ctx->pc != 0x1210D4u) { return; }
    }
    ctx->pc = 0x1210D4u;
label_1210d4:
    // 0x1210d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1210d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1210d8: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1210D8u;
    {
        const bool branch_taken_0x1210d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1210DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1210D8u;
            // 0x1210dc: 0x2721821  addu        $v1, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1210d8) {
            ctx->pc = 0x121100u;
            goto label_121100;
        }
    }
    ctx->pc = 0x1210E0u;
    // 0x1210e0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1210e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1210e4:
    // 0x1210e4: 0x8c43384c  lw          $v1, 0x384C($v0)
    ctx->pc = 0x1210e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14412)));
    // 0x1210e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1210E8u;
    {
        const bool branch_taken_0x1210e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1210ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1210E8u;
            // 0x1210ec: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1210e8) {
            ctx->pc = 0x1210F8u;
            goto label_1210f8;
        }
    }
    ctx->pc = 0x1210F0u;
    // 0x1210f0: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1210F0u;
    SET_GPR_U32(ctx, 31, 0x1210F8u);
    ctx->pc = 0x1210F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1210F0u;
            // 0x1210f4: 0x24841d20  addiu       $a0, $a0, 0x1D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1210F8u; }
        if (ctx->pc != 0x1210F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1210F8u; }
        if (ctx->pc != 0x1210F8u) { return; }
    }
    ctx->pc = 0x1210F8u;
label_1210f8:
    // 0x1210f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1210F8u;
    {
        const bool branch_taken_0x1210f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1210FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1210F8u;
            // 0x1210fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1210f8) {
            ctx->pc = 0x121108u;
            goto label_121108;
        }
    }
    ctx->pc = 0x121100u;
label_121100:
    // 0x121100: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x121100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121104: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x121104u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_121108:
    // 0x121108: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x121108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x12110c: 0xdfb30130  ld          $s3, 0x130($sp)
    ctx->pc = 0x12110cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x121110: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x121110u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x121114: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x121114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x121118: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x121118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x12111c: 0x3e00008  jr          $ra
    ctx->pc = 0x12111Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12111Cu;
            // 0x121120: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x121124u;
}
