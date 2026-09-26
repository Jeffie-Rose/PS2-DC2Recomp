#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: S51Thunder__FP6CScene
// Address: 0x2f76f0 - 0x2f7980
void S51Thunder__FP6CScene_0x2f76f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("S51Thunder__FP6CScene_0x2f76f0");
#endif

    switch (ctx->pc) {
        case 0x2f7710u: goto label_2f7710;
        case 0x2f7728u: goto label_2f7728;
        case 0x2f7758u: goto label_2f7758;
        case 0x2f777cu: goto label_2f777c;
        case 0x2f77e0u: goto label_2f77e0;
        case 0x2f7808u: goto label_2f7808;
        case 0x2f7864u: goto label_2f7864;
        case 0x2f787cu: goto label_2f787c;
        case 0x2f78acu: goto label_2f78ac;
        case 0x2f78c0u: goto label_2f78c0;
        case 0x2f78ccu: goto label_2f78cc;
        case 0x2f78d4u: goto label_2f78d4;
        case 0x2f78d8u: goto label_2f78d8;
        case 0x2f78f0u: goto label_2f78f0;
        case 0x2f7914u: goto label_2f7914;
        case 0x2f7934u: goto label_2f7934;
        default: break;
    }

    ctx->pc = 0x2f76f0u;

    // 0x2f76f0: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x2f76f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x2f76f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f76f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f76f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f76f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2f76fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f76fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f7700: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2f7700u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2f7704: 0x8c852e5c  lw          $a1, 0x2E5C($a0)
    ctx->pc = 0x2f7704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
    // 0x2f7708: 0xc0a0f24  jal         func_283C90
    ctx->pc = 0x2F7708u;
    SET_GPR_U32(ctx, 31, 0x2F7710u);
    ctx->pc = 0x2F770Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7708u;
            // 0x2f770c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283C90u;
    if (runtime->hasFunction(0x283C90u)) {
        auto targetFn = runtime->lookupFunction(0x283C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7710u; }
        if (ctx->pc != 0x2F7710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapName__6CSceneFi_0x283c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7710u; }
        if (ctx->pc != 0x2F7710u) { return; }
    }
    ctx->pc = 0x2F7710u;
label_2f7710:
    // 0x2f7710: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f7710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7714: 0x10800094  beqz        $a0, . + 4 + (0x94 << 2)
    ctx->pc = 0x2F7714u;
    {
        const bool branch_taken_0x2f7714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7714) {
            ctx->pc = 0x2F7968u;
            goto label_2f7968;
        }
    }
    ctx->pc = 0x2F771Cu;
    // 0x2f771c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f771cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2f7720: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x2F7720u;
    SET_GPR_U32(ctx, 31, 0x2F7728u);
    ctx->pc = 0x2F7724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7720u;
            // 0x2f7724: 0x24a51a50  addiu       $a1, $a1, 0x1A50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7728u; }
        if (ctx->pc != 0x2F7728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7728u; }
        if (ctx->pc != 0x2F7728u) { return; }
    }
    ctx->pc = 0x2F7728u;
label_2f7728:
    // 0x2f7728: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7728u;
    {
        const bool branch_taken_0x2f7728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7728) {
            ctx->pc = 0x2F7738u;
            goto label_2f7738;
        }
    }
    ctx->pc = 0x2F7730u;
    // 0x2f7730: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x2F7730u;
    {
        const bool branch_taken_0x2f7730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7730u;
            // 0x2f7734: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7730) {
            ctx->pc = 0x2F796Cu;
            goto label_2f796c;
        }
    }
    ctx->pc = 0x2F7738u;
label_2f7738:
    // 0x2f7738: 0x8f829f14  lw          $v0, -0x60EC($gp)
    ctx->pc = 0x2f7738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942484)));
    // 0x2f773c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2F773Cu;
    {
        const bool branch_taken_0x2f773c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f773c) {
            ctx->pc = 0x2F77B0u;
            goto label_2f77b0;
        }
    }
    ctx->pc = 0x2F7744u;
    // 0x2f7744: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x2f7744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2f7748: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f7748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f774c: 0xaf839f18  sw          $v1, -0x60E8($gp)
    ctx->pc = 0x2f774cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942488), GPR_U32(ctx, 3));
    // 0x2f7750: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x2F7750u;
    SET_GPR_U32(ctx, 31, 0x2F7758u);
    ctx->pc = 0x2F7754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7750u;
            // 0x2f7754: 0xaf829f0c  sw          $v0, -0x60F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942476), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7758u; }
        if (ctx->pc != 0x2F7758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7758u; }
        if (ctx->pc != 0x2F7758u) { return; }
    }
    ctx->pc = 0x2F7758u;
label_2f7758:
    // 0x2f7758: 0x24040096  addiu       $a0, $zero, 0x96
    ctx->pc = 0x2f7758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2f775c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f775cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7760: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2f7760u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f7764: 0xaf839f1c  sw          $v1, -0x60E4($gp)
    ctx->pc = 0x2f7764u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942492), GPR_U32(ctx, 3));
    // 0x2f7768: 0x0  nop
    ctx->pc = 0x2f7768u;
    // NOP
    // 0x2f776c: 0x1010  mfhi        $v0
    ctx->pc = 0x2f776cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2f7770: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2f7770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2f7774: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x2F7774u;
    SET_GPR_U32(ctx, 31, 0x2F777Cu);
    ctx->pc = 0x2F7778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7774u;
            // 0x2f7778: 0xaf829f14  sw          $v0, -0x60EC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942484), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F777Cu; }
        if (ctx->pc != 0x2F777Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F777Cu; }
        if (ctx->pc != 0x2F777Cu) { return; }
    }
    ctx->pc = 0x2F777Cu;
label_2f777c:
    // 0x2f777c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2f777cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2f7780: 0x8f839f14  lw          $v1, -0x60EC($gp)
    ctx->pc = 0x2f7780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942484)));
    // 0x2f7784: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2f7784u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f7788: 0x0  nop
    ctx->pc = 0x2f7788u;
    // NOP
    // 0x2f778c: 0x0  nop
    ctx->pc = 0x2f778cu;
    // NOP
    // 0x2f7790: 0x1010  mfhi        $v0
    ctx->pc = 0x2f7790u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2f7794: 0xaf829f20  sw          $v0, -0x60E0($gp)
    ctx->pc = 0x2f7794u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942496), GPR_U32(ctx, 2));
    // 0x2f7798: 0x8f829f20  lw          $v0, -0x60E0($gp)
    ctx->pc = 0x2f7798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942496)));
    // 0x2f779c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2f779cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f77a0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F77A0u;
    {
        const bool branch_taken_0x2f77a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f77a0) {
            ctx->pc = 0x2F77B0u;
            goto label_2f77b0;
        }
    }
    ctx->pc = 0x2F77A8u;
    // 0x2f77a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f77a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f77ac: 0xaf829f20  sw          $v0, -0x60E0($gp)
    ctx->pc = 0x2f77acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942496), GPR_U32(ctx, 2));
label_2f77b0:
    // 0x2f77b0: 0x8f829f1c  lw          $v0, -0x60E4($gp)
    ctx->pc = 0x2f77b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942492)));
    // 0x2f77b4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F77B4u;
    {
        const bool branch_taken_0x2f77b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f77b4) {
            ctx->pc = 0x2F7808u;
            goto label_2f7808;
        }
    }
    ctx->pc = 0x2F77BCu;
    // 0x2f77bc: 0x8f829f20  lw          $v0, -0x60E0($gp)
    ctx->pc = 0x2f77bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942496)));
    // 0x2f77c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f77c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f77c4: 0xaf829f20  sw          $v0, -0x60E0($gp)
    ctx->pc = 0x2f77c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942496), GPR_U32(ctx, 2));
    // 0x2f77c8: 0x8f829f20  lw          $v0, -0x60E0($gp)
    ctx->pc = 0x2f77c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942496)));
    // 0x2f77cc: 0x1c40000e  bgtz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F77CCu;
    {
        const bool branch_taken_0x2f77cc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2f77cc) {
            ctx->pc = 0x2F7808u;
            goto label_2f7808;
        }
    }
    ctx->pc = 0x2F77D4u;
    // 0x2f77d4: 0xaf809f20  sw          $zero, -0x60E0($gp)
    ctx->pc = 0x2f77d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942496), GPR_U32(ctx, 0));
    // 0x2f77d8: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x2F77D8u;
    SET_GPR_U32(ctx, 31, 0x2F77E0u);
    ctx->pc = 0x2F77DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F77D8u;
            // 0x2f77dc: 0xaf809f1c  sw          $zero, -0x60E4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942492), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F77E0u; }
        if (ctx->pc != 0x2F77E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F77E0u; }
        if (ctx->pc != 0x2F77E0u) { return; }
    }
    ctx->pc = 0x2F77E0u;
label_2f77e0:
    // 0x2f77e0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F77E0u;
    {
        const bool branch_taken_0x2f77e0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F77E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F77E0u;
            // 0x2f77e4: 0x30430003  andi        $v1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f77e0) {
            ctx->pc = 0x2F77F4u;
            goto label_2f77f4;
        }
    }
    ctx->pc = 0x2F77E8u;
    // 0x2f77e8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F77E8u;
    {
        const bool branch_taken_0x2f77e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f77e8) {
            ctx->pc = 0x2F77F4u;
            goto label_2f77f4;
        }
    }
    ctx->pc = 0x2F77F0u;
    // 0x2f77f0: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x2f77f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_2f77f4:
    // 0x2f77f4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2f77f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2f77f8: 0x24650015  addiu       $a1, $v1, 0x15
    ctx->pc = 0x2f77f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 21));
    // 0x2f77fc: 0x8c24e534  lw          $a0, -0x1ACC($at)
    ctx->pc = 0x2f77fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960436)));
    // 0x2f7800: 0xc063818  jal         func_18E060
    ctx->pc = 0x2F7800u;
    SET_GPR_U32(ctx, 31, 0x2F7808u);
    ctx->pc = 0x2F7804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7800u;
            // 0x2f7804: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7808u; }
        if (ctx->pc != 0x2F7808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7808u; }
        if (ctx->pc != 0x2F7808u) { return; }
    }
    ctx->pc = 0x2F7808u;
label_2f7808:
    // 0x2f7808: 0x8f829f18  lw          $v0, -0x60E8($gp)
    ctx->pc = 0x2f7808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942488)));
    // 0x2f780c: 0x8f849f0c  lw          $a0, -0x60F4($gp)
    ctx->pc = 0x2f780cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942476)));
    // 0x2f7810: 0x8f839f14  lw          $v1, -0x60EC($gp)
    ctx->pc = 0x2f7810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942484)));
    // 0x2f7814: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f7814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f7818: 0xaf829f18  sw          $v0, -0x60E8($gp)
    ctx->pc = 0x2f7818u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942488), GPR_U32(ctx, 2));
    // 0x2f781c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2f781cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2f7820: 0x8f829f18  lw          $v0, -0x60E8($gp)
    ctx->pc = 0x2f7820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942488)));
    // 0x2f7824: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f7824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f7828: 0xaf849f0c  sw          $a0, -0x60F4($gp)
    ctx->pc = 0x2f7828u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942476), GPR_U32(ctx, 4));
    // 0x2f782c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F782Cu;
    {
        const bool branch_taken_0x2f782c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F7830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F782Cu;
            // 0x2f7830: 0xaf839f14  sw          $v1, -0x60EC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942484), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f782c) {
            ctx->pc = 0x2F7838u;
            goto label_2f7838;
        }
    }
    ctx->pc = 0x2F7834u;
    // 0x2f7834: 0xaf809f18  sw          $zero, -0x60E8($gp)
    ctx->pc = 0x2f7834u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942488), GPR_U32(ctx, 0));
label_2f7838:
    // 0x2f7838: 0xc7819f18  lwc1        $f1, -0x60E8($gp)
    ctx->pc = 0x2f7838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f783c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2f783cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2f7840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f7840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f7844: 0x8e052e5c  lw          $a1, 0x2E5C($s0)
    ctx->pc = 0x2f7844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11868)));
    // 0x2f7848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f784c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f784cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f7850: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2f7850u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2f7854: 0x0  nop
    ctx->pc = 0x2f7854u;
    // NOP
    // 0x2f7858: 0x0  nop
    ctx->pc = 0x2f7858u;
    // NOP
    // 0x2f785c: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x2F785Cu;
    SET_GPR_U32(ctx, 31, 0x2F7864u);
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7864u; }
        if (ctx->pc != 0x2F7864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7864u; }
        if (ctx->pc != 0x2F7864u) { return; }
    }
    ctx->pc = 0x2F7864u;
label_2f7864:
    // 0x2f7864: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f7864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7868: 0x1200003f  beqz        $s0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2F7868u;
    {
        const bool branch_taken_0x2f7868 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7868) {
            ctx->pc = 0x2F7968u;
            goto label_2f7968;
        }
    }
    ctx->pc = 0x2F7870u;
    // 0x2f7870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7874: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x2F7874u;
    SET_GPR_U32(ctx, 31, 0x2F787Cu);
    ctx->pc = 0x2F7878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7874u;
            // 0x2f7878: 0x27a50218  addiu       $a1, $sp, 0x218 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F787Cu; }
        if (ctx->pc != 0x2F787Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTimeLightingRatio__4CMapFPf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F787Cu; }
        if (ctx->pc != 0x2F787Cu) { return; }
    }
    ctx->pc = 0x2F787Cu;
label_2f787c:
    // 0x2f787c: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x2f787cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f7880: 0x14600039  bnez        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x2F7880u;
    {
        const bool branch_taken_0x2f7880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7880) {
            ctx->pc = 0x2F7968u;
            goto label_2f7968;
        }
    }
    ctx->pc = 0x2F7888u;
    // 0x2f7888: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f7888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f788c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2f788cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f7890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f7890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f7894: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f7894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7898: 0x240601d0  addiu       $a2, $zero, 0x1D0
    ctx->pc = 0x2f7898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    // 0x2f789c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2f789cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2f78a0: 0xe7a00218  swc1        $f0, 0x218($sp)
    ctx->pc = 0x2f78a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
    // 0x2f78a4: 0xc049c86  jal         func_127218
    ctx->pc = 0x2F78A4u;
    SET_GPR_U32(ctx, 31, 0x2F78ACu);
    ctx->pc = 0x2F78A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F78A4u;
            // 0x2f78a8: 0xe7b4021c  swc1        $f20, 0x21C($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F78ACu; }
        if (ctx->pc != 0x2F78ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F78ACu; }
        if (ctx->pc != 0x2F78ACu) { return; }
    }
    ctx->pc = 0x2F78ACu;
label_2f78ac:
    // 0x2f78ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f78acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f78b0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2f78b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f78b4: 0x27a60218  addiu       $a2, $sp, 0x218
    ctx->pc = 0x2f78b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
    // 0x2f78b8: 0xc0585e4  jal         func_161790
    ctx->pc = 0x2F78B8u;
    SET_GPR_U32(ctx, 31, 0x2F78C0u);
    ctx->pc = 0x2F78BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F78B8u;
            // 0x2f78bc: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161790u;
    if (runtime->hasFunction(0x161790u)) {
        auto targetFn = runtime->lookupFunction(0x161790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F78C0u; }
        if (ctx->pc != 0x2F78C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLightInfo__4CMapFP16CMapLightingInfoPfi_0x161790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F78C0u; }
        if (ctx->pc != 0x2F78C0u) { return; }
    }
    ctx->pc = 0x2F78C0u;
label_2f78c0:
    // 0x2f78c0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2f78c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f78c4: 0xc050dd0  jal         func_143740
    ctx->pc = 0x2F78C4u;
    SET_GPR_U32(ctx, 31, 0x2F78CCu);
    ctx->pc = 0x2F78C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F78C4u;
            // 0x2f78c8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143740u;
    if (runtime->hasFunction(0x143740u)) {
        auto targetFn = runtime->lookupFunction(0x143740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F78CCu; }
        if (ctx->pc != 0x2F78CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetLight__FPA4_fPA4_f_0x143740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F78CCu; }
        if (ctx->pc != 0x2F78CCu) { return; }
    }
    ctx->pc = 0x2F78CCu;
label_2f78cc:
    // 0x2f78cc: 0xc050dec  jal         func_1437B0
    ctx->pc = 0x2F78CCu;
    SET_GPR_U32(ctx, 31, 0x2F78D4u);
    ctx->pc = 0x2F78D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F78CCu;
            // 0x2f78d0: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437B0u;
    if (runtime->hasFunction(0x1437B0u)) {
        auto targetFn = runtime->lookupFunction(0x1437B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F78D4u; }
        if (ctx->pc != 0x2F78D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAmbient__FPf_0x1437b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F78D4u; }
        if (ctx->pc != 0x2F78D4u) { return; }
    }
    ctx->pc = 0x2F78D4u;
label_2f78d4:
    // 0x2f78d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f78d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f78d8:
    // 0x2f78d8: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F78D8u;
    {
        const bool branch_taken_0x2f78d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F78DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F78D8u;
            // 0x2f78dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f78d8) {
            ctx->pc = 0x2F78F4u;
            goto label_2f78f4;
        }
    }
    ctx->pc = 0x2F78E0u;
    // 0x2f78e0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f78e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2f78e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f78e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f78e8: 0xc057508  jal         func_15D420
    ctx->pc = 0x2F78E8u;
    SET_GPR_U32(ctx, 31, 0x2F78F0u);
    ctx->pc = 0x2F78ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F78E8u;
            // 0x2f78ec: 0x24a51a58  addiu       $a1, $a1, 0x1A58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D420u;
    if (runtime->hasFunction(0x15D420u)) {
        auto targetFn = runtime->lookupFunction(0x15D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F78F0u; }
        if (ctx->pc != 0x2F78F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFPc_0x15d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F78F0u; }
        if (ctx->pc != 0x2F78F0u) { return; }
    }
    ctx->pc = 0x2F78F0u;
label_2f78f0:
    // 0x2f78f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f78f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f78f4:
    // 0x2f78f4: 0x0  nop
    ctx->pc = 0x2f78f4u;
    // NOP
    // 0x2f78f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f78f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f78fc: 0x16230006  bne         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F78FCu;
    {
        const bool branch_taken_0x2f78fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f78fc) {
            ctx->pc = 0x2F7918u;
            goto label_2f7918;
        }
    }
    ctx->pc = 0x2F7904u;
    // 0x2f7904: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f7904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2f7908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f790c: 0xc057508  jal         func_15D420
    ctx->pc = 0x2F790Cu;
    SET_GPR_U32(ctx, 31, 0x2F7914u);
    ctx->pc = 0x2F7910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F790Cu;
            // 0x2f7910: 0x24a51a68  addiu       $a1, $a1, 0x1A68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D420u;
    if (runtime->hasFunction(0x15D420u)) {
        auto targetFn = runtime->lookupFunction(0x15D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7914u; }
        if (ctx->pc != 0x2F7914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFPc_0x15d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7914u; }
        if (ctx->pc != 0x2F7914u) { return; }
    }
    ctx->pc = 0x2F7914u;
label_2f7914:
    // 0x2f7914: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f7914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f7918:
    // 0x2f7918: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F7918u;
    {
        const bool branch_taken_0x2f7918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7918) {
            ctx->pc = 0x2F7954u;
            goto label_2f7954;
        }
    }
    ctx->pc = 0x2F7920u;
    // 0x2f7920: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f7920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7924: 0xac830064  sw          $v1, 0x64($a0)
    ctx->pc = 0x2f7924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 3));
    // 0x2f7928: 0x8c8400b0  lw          $a0, 0xB0($a0)
    ctx->pc = 0x2f7928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x2f792c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F792Cu;
    {
        const bool branch_taken_0x2f792c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f792c) {
            ctx->pc = 0x2F7954u;
            goto label_2f7954;
        }
    }
    ctx->pc = 0x2F7934u;
label_2f7934:
    // 0x2f7934: 0x0  nop
    ctx->pc = 0x2f7934u;
    // NOP
    // 0x2f7938: 0xac830064  sw          $v1, 0x64($a0)
    ctx->pc = 0x2f7938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 3));
    // 0x2f793c: 0xe4940068  swc1        $f20, 0x68($a0)
    ctx->pc = 0x2f793cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x2f7940: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2f7940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f7944: 0x0  nop
    ctx->pc = 0x2f7944u;
    // NOP
    // 0x2f7948: 0x0  nop
    ctx->pc = 0x2f7948u;
    // NOP
    // 0x2f794c: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F794Cu;
    {
        const bool branch_taken_0x2f794c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f794c) {
            ctx->pc = 0x2F7934u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f7934;
        }
    }
    ctx->pc = 0x2F7954u;
label_2f7954:
    // 0x2f7954: 0x0  nop
    ctx->pc = 0x2f7954u;
    // NOP
    // 0x2f7958: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f7958u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f795c: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x2f795cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f7960: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2F7960u;
    {
        const bool branch_taken_0x2f7960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7960) {
            ctx->pc = 0x2F78D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f78d8;
        }
    }
    ctx->pc = 0x2F7968u;
label_2f7968:
    // 0x2f7968: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f7968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f796c:
    // 0x2f796c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2f796cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f7970: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f7970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7974: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f7974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7978: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F797Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7978u;
            // 0x2f797c: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F7980u;
}
