#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PlayerPartyCure__Fv
// Address: 0x1a17c0 - 0x1a1848
void PlayerPartyCure__Fv_0x1a17c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PlayerPartyCure__Fv_0x1a17c0");
#endif

    switch (ctx->pc) {
        case 0x1a17d0u: goto label_1a17d0;
        case 0x1a17ecu: goto label_1a17ec;
        case 0x1a17fcu: goto label_1a17fc;
        case 0x1a1810u: goto label_1a1810;
        case 0x1a1824u: goto label_1a1824;
        case 0x1a1838u: goto label_1a1838;
        default: break;
    }

    ctx->pc = 0x1a17c0u;

    // 0x1a17c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a17c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a17c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a17c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a17c8: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x1A17C8u;
    SET_GPR_U32(ctx, 31, 0x1A17D0u);
    ctx->pc = 0x1A17CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A17C8u;
            // 0x1a17cc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A17D0u; }
        if (ctx->pc != 0x1A17D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A17D0u; }
        if (ctx->pc != 0x1A17D0u) { return; }
    }
    ctx->pc = 0x1A17D0u;
label_1a17d0:
    // 0x1a17d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a17d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a17d4: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A17D4u;
    {
        const bool branch_taken_0x1a17d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a17d4) {
            ctx->pc = 0x1A1838u;
            goto label_1a1838;
        }
    }
    ctx->pc = 0x1A17DCu;
    // 0x1a17dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a17dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a17e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a17e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a17e4: 0xc065b40  jal         func_196D00
    ctx->pc = 0x1A17E4u;
    SET_GPR_U32(ctx, 31, 0x1A17ECu);
    ctx->pc = 0x1A17E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A17E4u;
            // 0x1a17e8: 0x26043f48  addiu       $a0, $s0, 0x3F48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D00u;
    if (runtime->hasFunction(0x196D00u)) {
        auto targetFn = runtime->lookupFunction(0x196D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A17ECu; }
        if (ctx->pc != 0x1A17ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFillRate__11COMMON_GAGEFf_0x196d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A17ECu; }
        if (ctx->pc != 0x1A17ECu) { return; }
    }
    ctx->pc = 0x1A17ECu;
label_1a17ec:
    // 0x1a17ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a17ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a17f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a17f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a17f4: 0xc065b40  jal         func_196D00
    ctx->pc = 0x1A17F4u;
    SET_GPR_U32(ctx, 31, 0x1A17FCu);
    ctx->pc = 0x1A17F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A17F4u;
            // 0x1a17f8: 0x260442d4  addiu       $a0, $s0, 0x42D4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D00u;
    if (runtime->hasFunction(0x196D00u)) {
        auto targetFn = runtime->lookupFunction(0x196D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A17FCu; }
        if (ctx->pc != 0x1A17FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFillRate__11COMMON_GAGEFf_0x196d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A17FCu; }
        if (ctx->pc != 0x1A17FCu) { return; }
    }
    ctx->pc = 0x1A17FCu;
label_1a17fc:
    // 0x1a17fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a17fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1800: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1804: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x1a1804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1a1808: 0xc067030  jal         func_19C0C0
    ctx->pc = 0x1A1808u;
    SET_GPR_U32(ctx, 31, 0x1A1810u);
    ctx->pc = 0x1A180Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1808u;
            // 0x1a180c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C0C0u;
    if (runtime->hasFunction(0x19C0C0u)) {
        auto targetFn = runtime->lookupFunction(0x19C0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1810u; }
        if (ctx->pc != 0x1A1810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaStatusAttirbute__16CUserDataManagerFiUii_0x19c0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1810u; }
        if (ctx->pc != 0x1A1810u) { return; }
    }
    ctx->pc = 0x1A1810u;
label_1a1810:
    // 0x1a1810: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a1810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1818: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x1a1818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1a181c: 0xc067030  jal         func_19C0C0
    ctx->pc = 0x1A181Cu;
    SET_GPR_U32(ctx, 31, 0x1A1824u);
    ctx->pc = 0x1A1820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A181Cu;
            // 0x1a1820: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C0C0u;
    if (runtime->hasFunction(0x19C0C0u)) {
        auto targetFn = runtime->lookupFunction(0x19C0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1824u; }
        if (ctx->pc != 0x1A1824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaStatusAttirbute__16CUserDataManagerFiUii_0x19c0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1824u; }
        if (ctx->pc != 0x1A1824u) { return; }
    }
    ctx->pc = 0x1A1824u;
label_1a1824:
    // 0x1a1824: 0x26044eb0  addiu       $a0, $s0, 0x4EB0
    ctx->pc = 0x1a1824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20144));
    // 0x1a1828: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1828u;
    {
        const bool branch_taken_0x1a1828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1828) {
            ctx->pc = 0x1A1838u;
            goto label_1a1838;
        }
    }
    ctx->pc = 0x1A1830u;
    // 0x1a1830: 0xc066b58  jal         func_19AD60
    ctx->pc = 0x1A1830u;
    SET_GPR_U32(ctx, 31, 0x1A1838u);
    ctx->pc = 0x19AD60u;
    if (runtime->hasFunction(0x19AD60u)) {
        auto targetFn = runtime->lookupFunction(0x19AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1838u; }
        if (ctx->pc != 0x1A1838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AllCure__11CMonsterBoxFv_0x19ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1838u; }
        if (ctx->pc != 0x1A1838u) { return; }
    }
    ctx->pc = 0x1A1838u;
label_1a1838:
    // 0x1a1838: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a1838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a183c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a183cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1840: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1840u;
            // 0x1a1844: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1848u;
}
