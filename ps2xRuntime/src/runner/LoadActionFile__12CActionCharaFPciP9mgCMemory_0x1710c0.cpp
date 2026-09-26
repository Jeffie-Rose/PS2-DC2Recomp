#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadActionFile__12CActionCharaFPciP9mgCMemory
// Address: 0x1710c0 - 0x171154
void LoadActionFile__12CActionCharaFPciP9mgCMemory_0x1710c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadActionFile__12CActionCharaFPciP9mgCMemory_0x1710c0");
#endif

    switch (ctx->pc) {
        case 0x1710ecu: goto label_1710ec;
        case 0x171110u: goto label_171110;
        case 0x171124u: goto label_171124;
        case 0x171134u: goto label_171134;
        default: break;
    }

    ctx->pc = 0x1710c0u;

    // 0x1710c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1710c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1710c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1710c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1710c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1710c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1710cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1710ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1710d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1710d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1710d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1710d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1710d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1710d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1710dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1710dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1710e0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1710e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1710e4: 0xc0b4858  jal         func_2D2160
    ctx->pc = 0x1710E4u;
    SET_GPR_U32(ctx, 31, 0x1710ECu);
    ctx->pc = 0x1710E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1710E4u;
            // 0x1710e8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2160u;
    if (runtime->hasFunction(0x2D2160u)) {
        auto targetFn = runtime->lookupFunction(0x2D2160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1710ECu; }
        if (ctx->pc != 0x1710ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActionExtendTable__Fv_0x2d2160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1710ECu; }
        if (ctx->pc != 0x1710ECu) { return; }
    }
    ctx->pc = 0x1710ECu;
label_1710ec:
    // 0x1710ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1710ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1710f0: 0x111103  sra         $v0, $s1, 4
    ctx->pc = 0x1710f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 4));
    // 0x1710f4: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1710F4u;
    {
        const bool branch_taken_0x1710f4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1710F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1710F4u;
            // 0x1710f8: 0xa663068a  sh          $v1, 0x68A($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 1674), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1710f4) {
            ctx->pc = 0x171104u;
            goto label_171104;
        }
    }
    ctx->pc = 0x1710FCu;
    // 0x1710fc: 0x2622000f  addiu       $v0, $s1, 0xF
    ctx->pc = 0x1710fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 15));
    // 0x171100: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x171100u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_171104:
    // 0x171104: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x171104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x171108: 0xc04e704  jal         func_139C10
    ctx->pc = 0x171108u;
    SET_GPR_U32(ctx, 31, 0x171110u);
    ctx->pc = 0x17110Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171108u;
            // 0x17110c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171110u; }
        if (ctx->pc != 0x171110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171110u; }
        if (ctx->pc != 0x171110u) { return; }
    }
    ctx->pc = 0x171110u;
label_171110:
    // 0x171110: 0xae6206b8  sw          $v0, 0x6B8($s3)
    ctx->pc = 0x171110u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1720), GPR_U32(ctx, 2));
    // 0x171114: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x171114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171118: 0x8e6406b8  lw          $a0, 0x6B8($s3)
    ctx->pc = 0x171118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1720)));
    // 0x17111c: 0xc049c18  jal         func_127060
    ctx->pc = 0x17111Cu;
    SET_GPR_U32(ctx, 31, 0x171124u);
    ctx->pc = 0x171120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17111Cu;
            // 0x171120: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171124u; }
        if (ctx->pc != 0x171124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171124u; }
        if (ctx->pc != 0x171124u) { return; }
    }
    ctx->pc = 0x171124u;
label_171124:
    // 0x171124: 0x8e6506b8  lw          $a1, 0x6B8($s3)
    ctx->pc = 0x171124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1720)));
    // 0x171128: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x171128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17112c: 0xc0b4834  jal         func_2D20D0
    ctx->pc = 0x17112Cu;
    SET_GPR_U32(ctx, 31, 0x171134u);
    ctx->pc = 0x171130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17112Cu;
            // 0x171130: 0x266406bc  addiu       $a0, $s3, 0x6BC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1724));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D20D0u;
    if (runtime->hasFunction(0x2D20D0u)) {
        auto targetFn = runtime->lookupFunction(0x2D20D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171134u; }
        if (ctx->pc != 0x171134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActionScript__FP10CRunScriptPcP9mgCMemory_0x2d20d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171134u; }
        if (ctx->pc != 0x171134u) { return; }
    }
    ctx->pc = 0x171134u;
label_171134:
    // 0x171134: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x171134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x171138: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17113c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17113cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x171140: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x171140u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171144: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x171144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171148: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x171148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17114c: 0x3e00008  jr          $ra
    ctx->pc = 0x17114Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17114Cu;
            // 0x171150: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171154u;
}
