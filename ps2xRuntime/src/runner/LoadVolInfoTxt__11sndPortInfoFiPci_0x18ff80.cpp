#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadVolInfoTxt__11sndPortInfoFiPci
// Address: 0x18ff80 - 0x190170
void LoadVolInfoTxt__11sndPortInfoFiPci_0x18ff80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadVolInfoTxt__11sndPortInfoFiPci_0x18ff80");
#endif

    switch (ctx->pc) {
        case 0x190018u: goto label_190018;
        case 0x190024u: goto label_190024;
        case 0x190038u: goto label_190038;
        case 0x190050u: goto label_190050;
        case 0x190060u: goto label_190060;
        case 0x19006cu: goto label_19006c;
        case 0x1900a8u: goto label_1900a8;
        case 0x1900d8u: goto label_1900d8;
        case 0x1900e8u: goto label_1900e8;
        case 0x190130u: goto label_190130;
        default: break;
    }

    ctx->pc = 0x18ff80u;

    // 0x18ff80: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x18ff80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x18ff84: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x18ff84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x18ff88: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18ff88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18ff8c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18ff8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18ff90: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x18ff90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ff94: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18ff94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18ff98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18ff98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18ff9c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x18ff9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ffa0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18ffa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18ffa4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18ffa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18ffa8: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18FFA8u;
    {
        const bool branch_taken_0x18ffa8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x18FFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FFA8u;
            // 0x18ffac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ffa8) {
            ctx->pc = 0x18FFC0u;
            goto label_18ffc0;
        }
    }
    ctx->pc = 0x18FFB0u;
    // 0x18ffb0: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x18ffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x18ffb4: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x18ffb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18ffb8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18FFB8u;
    {
        const bool branch_taken_0x18ffb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FFB8u;
            // 0x18ffbc: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ffb8) {
            ctx->pc = 0x18FFC8u;
            goto label_18ffc8;
        }
    }
    ctx->pc = 0x18FFC0u;
label_18ffc0:
    // 0x18ffc0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18FFC0u;
    {
        const bool branch_taken_0x18ffc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FFC0u;
            // 0x18ffc4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ffc0) {
            ctx->pc = 0x18FFD8u;
            goto label_18ffd8;
        }
    }
    ctx->pc = 0x18FFC8u;
label_18ffc8:
    // 0x18ffc8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x18ffc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18ffcc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18ffccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18ffd0: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x18ffd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x18ffd4: 0x2473000c  addiu       $s3, $v1, 0xC
    ctx->pc = 0x18ffd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_18ffd8:
    // 0x18ffd8: 0x1260005b  beqz        $s3, . + 4 + (0x5B << 2)
    ctx->pc = 0x18FFD8u;
    {
        const bool branch_taken_0x18ffd8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FFD8u;
            // 0x18ffdc: 0x3c03003d  lui         $v1, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ffd8) {
            ctx->pc = 0x190148u;
            goto label_190148;
        }
    }
    ctx->pc = 0x18FFE0u;
    // 0x18ffe0: 0x287a821  addu        $s5, $s4, $a3
    ctx->pc = 0x18ffe0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x18ffe4: 0x246376d0  addiu       $v1, $v1, 0x76D0
    ctx->pc = 0x18ffe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30416));
    // 0x18ffe8: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x18ffe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x18ffec: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x18ffecu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18fff0: 0x27a50118  addiu       $a1, $sp, 0x118
    ctx->pc = 0x18fff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x18fff4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x18fff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18fff8: 0x295082b  sltu        $at, $s4, $s5
    ctx->pc = 0x18fff8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x18fffc: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x18fffcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x190000: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x190000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x190004: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x190004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    // 0x190008: 0xafa40104  sw          $a0, 0x104($sp)
    ctx->pc = 0x190008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 4));
    // 0x19000c: 0x1020004d  beqz        $at, . + 4 + (0x4D << 2)
    ctx->pc = 0x19000Cu;
    {
        const bool branch_taken_0x19000c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x190010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19000Cu;
            // 0x190010: 0xafa30108  sw          $v1, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19000c) {
            ctx->pc = 0x190144u;
            goto label_190144;
        }
    }
    ctx->pc = 0x190014u;
    // 0x190014: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x190014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_190018:
    // 0x190018: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x190018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x19001c: 0xc063df8  jal         func_18F7E0
    ctx->pc = 0x19001Cu;
    SET_GPR_U32(ctx, 31, 0x190024u);
    ctx->pc = 0x190020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19001Cu;
            // 0x190020: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F7E0u;
    if (runtime->hasFunction(0x18F7E0u)) {
        auto targetFn = runtime->lookupFunction(0x18F7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190024u; }
        if (ctx->pc != 0x190024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLine__FPPcPcPc_0x18f7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190024u; }
        if (ctx->pc != 0x190024u) { return; }
    }
    ctx->pc = 0x190024u;
label_190024:
    // 0x190024: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x190024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x190028: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x190028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x19002c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x19002cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190030: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x190030u;
    SET_GPR_U32(ctx, 31, 0x190038u);
    ctx->pc = 0x190034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190030u;
            // 0x190034: 0x24a54ad0  addiu       $a1, $a1, 0x4AD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190038u; }
        if (ctx->pc != 0x190038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190038u; }
        if (ctx->pc != 0x190038u) { return; }
    }
    ctx->pc = 0x190038u;
label_190038:
    // 0x190038: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x190038u;
    {
        const bool branch_taken_0x190038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190038) {
            ctx->pc = 0x190144u;
            goto label_190144;
        }
    }
    ctx->pc = 0x190040u;
    // 0x190040: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x190040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x190044: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x190044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x190048: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x190048u;
    SET_GPR_U32(ctx, 31, 0x190050u);
    ctx->pc = 0x19004Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190048u;
            // 0x19004c: 0x24a54b48  addiu       $a1, $a1, 0x4B48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190050u; }
        if (ctx->pc != 0x190050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190050u; }
        if (ctx->pc != 0x190050u) { return; }
    }
    ctx->pc = 0x190050u;
label_190050:
    // 0x190050: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x190050u;
    {
        const bool branch_taken_0x190050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190050) {
            ctx->pc = 0x1900E0u;
            goto label_1900e0;
        }
    }
    ctx->pc = 0x190058u;
    // 0x190058: 0xc048fc0  jal         func_123F00
    ctx->pc = 0x190058u;
    SET_GPR_U32(ctx, 31, 0x190060u);
    ctx->pc = 0x19005Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190058u;
            // 0x19005c: 0x8fa40104  lw          $a0, 0x104($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F00u;
    if (runtime->hasFunction(0x123F00u)) {
        auto targetFn = runtime->lookupFunction(0x123F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190060u; }
        if (ctx->pc != 0x190060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x123f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190060u; }
        if (ctx->pc != 0x190060u) { return; }
    }
    ctx->pc = 0x190060u;
label_190060:
    // 0x190060: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x190060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x190064: 0xc048fc0  jal         func_123F00
    ctx->pc = 0x190064u;
    SET_GPR_U32(ctx, 31, 0x19006Cu);
    ctx->pc = 0x190068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190064u;
            // 0x190068: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F00u;
    if (runtime->hasFunction(0x123F00u)) {
        auto targetFn = runtime->lookupFunction(0x123F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19006Cu; }
        if (ctx->pc != 0x19006Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x123f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19006Cu; }
        if (ctx->pc != 0x19006Cu) { return; }
    }
    ctx->pc = 0x19006Cu;
label_19006c:
    // 0x19006c: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x19006cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x190070: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x190070u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190074: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x190074u;
    {
        const bool branch_taken_0x190074 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x190078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190074u;
            // 0x190078: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190074) {
            ctx->pc = 0x190080u;
            goto label_190080;
        }
    }
    ctx->pc = 0x19007Cu;
    // 0x19007c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19007cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190080:
    // 0x190080: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x190080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x190084: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x190084u;
    {
        const bool branch_taken_0x190084 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x190084) {
            ctx->pc = 0x190090u;
            goto label_190090;
        }
    }
    ctx->pc = 0x19008Cu;
    // 0x19008c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x19008cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_190090:
    // 0x190090: 0x6400028  bltz        $s2, . + 4 + (0x28 << 2)
    ctx->pc = 0x190090u;
    {
        const bool branch_taken_0x190090 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x190094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190090u;
            // 0x190094: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190090) {
            ctx->pc = 0x190134u;
            goto label_190134;
        }
    }
    ctx->pc = 0x190098u;
    // 0x190098: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x190098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19009c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19009cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1900a0: 0xc062250  jal         func_188940
    ctx->pc = 0x1900A0u;
    SET_GPR_U32(ctx, 31, 0x1900A8u);
    ctx->pc = 0x1900A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1900A0u;
            // 0x1900a4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188940u;
    if (runtime->hasFunction(0x188940u)) {
        auto targetFn = runtime->lookupFunction(0x188940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1900A8u; }
        if (ctx->pc != 0x1900A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetReverb__6CSoundFiii_0x188940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1900A8u; }
        if (ctx->pc != 0x1900A8u) { return; }
    }
    ctx->pc = 0x1900A8u;
label_1900a8:
    // 0x1900a8: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x1900a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1900ac: 0x27828a90  addiu       $v0, $gp, -0x7570
    ctx->pc = 0x1900acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937232));
    // 0x1900b0: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1900b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1900b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1900b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1900b8: 0x27828a98  addiu       $v0, $gp, -0x7568
    ctx->pc = 0x1900b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937240));
    // 0x1900bc: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1900bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x1900c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1900c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1900c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1900c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1900c8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1900c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1900cc: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1900ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1900d0: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1900D0u;
    SET_GPR_U32(ctx, 31, 0x1900D8u);
    ctx->pc = 0x1900D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1900D0u;
            // 0x1900d4: 0x24844b50  addiu       $a0, $a0, 0x4B50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1900D8u; }
        if (ctx->pc != 0x1900D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1900D8u; }
        if (ctx->pc != 0x1900D8u) { return; }
    }
    ctx->pc = 0x1900D8u;
label_1900d8:
    // 0x1900d8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1900D8u;
    {
        const bool branch_taken_0x1900d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1900d8) {
            ctx->pc = 0x190134u;
            goto label_190134;
        }
    }
    ctx->pc = 0x1900E0u;
label_1900e0:
    // 0x1900e0: 0xc048fc0  jal         func_123F00
    ctx->pc = 0x1900E0u;
    SET_GPR_U32(ctx, 31, 0x1900E8u);
    ctx->pc = 0x1900E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1900E0u;
            // 0x1900e4: 0x27a40118  addiu       $a0, $sp, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F00u;
    if (runtime->hasFunction(0x123F00u)) {
        auto targetFn = runtime->lookupFunction(0x123F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1900E8u; }
        if (ctx->pc != 0x1900E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x123f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1900E8u; }
        if (ctx->pc != 0x1900E8u) { return; }
    }
    ctx->pc = 0x1900E8u;
label_1900e8:
    // 0x1900e8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1900E8u;
    {
        const bool branch_taken_0x1900e8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1900e8) {
            ctx->pc = 0x190100u;
            goto label_190100;
        }
    }
    ctx->pc = 0x1900F0u;
    // 0x1900f0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1900f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1900f4: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1900f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1900f8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1900F8u;
    {
        const bool branch_taken_0x1900f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1900f8) {
            ctx->pc = 0x190108u;
            goto label_190108;
        }
    }
    ctx->pc = 0x190100u;
label_190100:
    // 0x190100: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x190100u;
    {
        const bool branch_taken_0x190100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190100u;
            // 0x190104: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190100) {
            ctx->pc = 0x19011Cu;
            goto label_19011c;
        }
    }
    ctx->pc = 0x190108u;
label_190108:
    // 0x190108: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x190108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x19010c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x19010cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x190110: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x190110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x190114: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x190114u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x190118: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x190118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19011c:
    // 0x19011c: 0x0  nop
    ctx->pc = 0x19011cu;
    // NOP
    // 0x190120: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x190120u;
    {
        const bool branch_taken_0x190120 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x190124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190120u;
            // 0x190124: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190120) {
            ctx->pc = 0x190134u;
            goto label_190134;
        }
    }
    ctx->pc = 0x190128u;
    // 0x190128: 0xc048fc0  jal         func_123F00
    ctx->pc = 0x190128u;
    SET_GPR_U32(ctx, 31, 0x190130u);
    ctx->pc = 0x123F00u;
    if (runtime->hasFunction(0x123F00u)) {
        auto targetFn = runtime->lookupFunction(0x123F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190130u; }
        if (ctx->pc != 0x190130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x123f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190130u; }
        if (ctx->pc != 0x190130u) { return; }
    }
    ctx->pc = 0x190130u;
label_190130:
    // 0x190130: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x190130u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
label_190134:
    // 0x190134: 0x0  nop
    ctx->pc = 0x190134u;
    // NOP
    // 0x190138: 0x295182b  sltu        $v1, $s4, $s5
    ctx->pc = 0x190138u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x19013c: 0x1460ffb6  bnez        $v1, . + 4 + (-0x4A << 2)
    ctx->pc = 0x19013Cu;
    {
        const bool branch_taken_0x19013c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x190140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19013Cu;
            // 0x190140: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19013c) {
            ctx->pc = 0x190018u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_190018;
        }
    }
    ctx->pc = 0x190144u;
label_190144:
    // 0x190144: 0x0  nop
    ctx->pc = 0x190144u;
    // NOP
label_190148:
    // 0x190148: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x190148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19014c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x19014cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x190150: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x190150u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x190154: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x190154u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x190158: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x190158u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19015c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19015cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190160: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x190160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190164: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x190164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190168: 0x3e00008  jr          $ra
    ctx->pc = 0x190168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19016Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190168u;
            // 0x19016c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190170u;
}
