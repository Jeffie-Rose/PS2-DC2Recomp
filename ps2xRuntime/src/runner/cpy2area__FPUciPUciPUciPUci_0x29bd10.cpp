#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: cpy2area__FPUciPUciPUciPUci
// Address: 0x29bd10 - 0x29be44
void cpy2area__FPUciPUciPUciPUci_0x29bd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cpy2area__FPUciPUciPUciPUci_0x29bd10");
#endif

    switch (ctx->pc) {
        case 0x29bd88u: goto label_29bd88;
        case 0x29bd98u: goto label_29bd98;
        case 0x29bdacu: goto label_29bdac;
        case 0x29bdccu: goto label_29bdcc;
        case 0x29bddcu: goto label_29bddc;
        case 0x29bdf0u: goto label_29bdf0;
        case 0x29be00u: goto label_29be00;
        case 0x29be10u: goto label_29be10;
        default: break;
    }

    ctx->pc = 0x29bd10u;

    // 0x29bd10: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x29bd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x29bd14: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x29bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x29bd18: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x29bd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x29bd1c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x29bd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x29bd20: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x29bd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x29bd24: 0x12bf021  addu        $fp, $t1, $t3
    ctx->pc = 0x29bd24u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x29bd28: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x29bd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x29bd2c: 0x5e082a  slt         $at, $v0, $fp
    ctx->pc = 0x29bd2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x29bd30: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29bd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29bd34: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x29bd34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29bd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29bd3c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x29bd3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd40: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29bd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29bd44: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x29bd44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29bd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29bd4c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x29bd4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29bd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29bd54: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x29bd54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29bd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29bd5c: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x29bd5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd60: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x29BD60u;
    {
        const bool branch_taken_0x29bd60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BD60u;
            // 0x29bd64: 0x160802d  daddu       $s0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bd60) {
            ctx->pc = 0x29BD70u;
            goto label_29bd70;
        }
    }
    ctx->pc = 0x29BD68u;
    // 0x29bd68: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x29BD68u;
    {
        const bool branch_taken_0x29bd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BD68u;
            // 0x29bd6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bd68) {
            ctx->pc = 0x29BE14u;
            goto label_29be14;
        }
    }
    ctx->pc = 0x29BD70u;
label_29bd70:
    // 0x29bd70: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x29bd70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x29bd74: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x29BD74u;
    {
        const bool branch_taken_0x29bd74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BD74u;
            // 0x29bd78: 0x2b2b823  subu        $s7, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bd74) {
            ctx->pc = 0x29BDB4u;
            goto label_29bdb4;
        }
    }
    ctx->pc = 0x29BD7Cu;
    // 0x29bd7c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29bd7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd80: 0xc049c18  jal         func_127060
    ctx->pc = 0x29BD80u;
    SET_GPR_U32(ctx, 31, 0x29BD88u);
    ctx->pc = 0x29BD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BD80u;
            // 0x29bd84: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BD88u; }
        if (ctx->pc != 0x29BD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BD88u; }
        if (ctx->pc != 0x29BD88u) { return; }
    }
    ctx->pc = 0x29BD88u;
label_29bd88:
    // 0x29bd88: 0x2752821  addu        $a1, $s3, $s5
    ctx->pc = 0x29bd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x29bd8c: 0x2553023  subu        $a2, $s2, $s5
    ctx->pc = 0x29bd8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x29bd90: 0xc049c18  jal         func_127060
    ctx->pc = 0x29BD90u;
    SET_GPR_U32(ctx, 31, 0x29BD98u);
    ctx->pc = 0x29BD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BD90u;
            // 0x29bd94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BD98u; }
        if (ctx->pc != 0x29BD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BD98u; }
        if (ctx->pc != 0x29BD98u) { return; }
    }
    ctx->pc = 0x29BD98u;
label_29bd98:
    // 0x29bd98: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x29bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x29bd9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29bd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bda0: 0x552023  subu        $a0, $v0, $s5
    ctx->pc = 0x29bda0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x29bda4: 0xc049c18  jal         func_127060
    ctx->pc = 0x29BDA4u;
    SET_GPR_U32(ctx, 31, 0x29BDACu);
    ctx->pc = 0x29BDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BDA4u;
            // 0x29bda8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BDACu; }
        if (ctx->pc != 0x29BDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BDACu; }
        if (ctx->pc != 0x29BDACu) { return; }
    }
    ctx->pc = 0x29BDACu;
label_29bdac:
    // 0x29bdac: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x29BDACu;
    {
        const bool branch_taken_0x29bdac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BDACu;
            // 0x29bdb0: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bdac) {
            ctx->pc = 0x29BE14u;
            goto label_29be14;
        }
    }
    ctx->pc = 0x29BDB4u;
label_29bdb4:
    // 0x29bdb4: 0x217102a  slt         $v0, $s0, $s7
    ctx->pc = 0x29bdb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x29bdb8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x29BDB8u;
    {
        const bool branch_taken_0x29bdb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BDB8u;
            // 0x29bdbc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bdb8) {
            ctx->pc = 0x29BDF8u;
            goto label_29bdf8;
        }
    }
    ctx->pc = 0x29BDC0u;
    // 0x29bdc0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29bdc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bdc4: 0xc049c18  jal         func_127060
    ctx->pc = 0x29BDC4u;
    SET_GPR_U32(ctx, 31, 0x29BDCCu);
    ctx->pc = 0x29BDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BDC4u;
            // 0x29bdc8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BDCCu; }
        if (ctx->pc != 0x29BDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BDCCu; }
        if (ctx->pc != 0x29BDCCu) { return; }
    }
    ctx->pc = 0x29BDCCu;
label_29bdcc:
    // 0x29bdcc: 0x2d22021  addu        $a0, $s6, $s2
    ctx->pc = 0x29bdccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x29bdd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29bdd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bdd4: 0xc049c18  jal         func_127060
    ctx->pc = 0x29BDD4u;
    SET_GPR_U32(ctx, 31, 0x29BDDCu);
    ctx->pc = 0x29BDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BDD4u;
            // 0x29bdd8: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BDDCu; }
        if (ctx->pc != 0x29BDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BDDCu; }
        if (ctx->pc != 0x29BDDCu) { return; }
    }
    ctx->pc = 0x29BDDCu;
label_29bddc:
    // 0x29bddc: 0x2351021  addu        $v0, $s1, $s5
    ctx->pc = 0x29bddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x29bde0: 0x2173023  subu        $a2, $s0, $s7
    ctx->pc = 0x29bde0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x29bde4: 0x522823  subu        $a1, $v0, $s2
    ctx->pc = 0x29bde4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x29bde8: 0xc049c18  jal         func_127060
    ctx->pc = 0x29BDE8u;
    SET_GPR_U32(ctx, 31, 0x29BDF0u);
    ctx->pc = 0x29BDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BDE8u;
            // 0x29bdec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BDF0u; }
        if (ctx->pc != 0x29BDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BDF0u; }
        if (ctx->pc != 0x29BDF0u) { return; }
    }
    ctx->pc = 0x29BDF0u;
label_29bdf0:
    // 0x29bdf0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29BDF0u;
    {
        const bool branch_taken_0x29bdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bdf0) {
            ctx->pc = 0x29BE10u;
            goto label_29be10;
        }
    }
    ctx->pc = 0x29BDF8u;
label_29bdf8:
    // 0x29bdf8: 0xc049c18  jal         func_127060
    ctx->pc = 0x29BDF8u;
    SET_GPR_U32(ctx, 31, 0x29BE00u);
    ctx->pc = 0x29BDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BDF8u;
            // 0x29bdfc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BE00u; }
        if (ctx->pc != 0x29BE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BE00u; }
        if (ctx->pc != 0x29BE00u) { return; }
    }
    ctx->pc = 0x29BE00u;
label_29be00:
    // 0x29be00: 0x2d22021  addu        $a0, $s6, $s2
    ctx->pc = 0x29be00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x29be04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29be04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29be08: 0xc049c18  jal         func_127060
    ctx->pc = 0x29BE08u;
    SET_GPR_U32(ctx, 31, 0x29BE10u);
    ctx->pc = 0x29BE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BE08u;
            // 0x29be0c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BE10u; }
        if (ctx->pc != 0x29BE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BE10u; }
        if (ctx->pc != 0x29BE10u) { return; }
    }
    ctx->pc = 0x29BE10u;
label_29be10:
    // 0x29be10: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x29be10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_29be14:
    // 0x29be14: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x29be14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29be18: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x29be18u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29be1c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x29be1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29be20: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29be20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29be24: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29be24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29be28: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29be28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29be2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29be2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29be30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29be30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29be34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29be34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29be38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29be38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29be3c: 0x3e00008  jr          $ra
    ctx->pc = 0x29BE3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BE3Cu;
            // 0x29be40: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29BE44u;
}
