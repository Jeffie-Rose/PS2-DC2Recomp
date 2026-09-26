#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgEndFrame__FP14mgCDrawManager
// Address: 0x1425b0 - 0x142ea0
void mgEndFrame__FP14mgCDrawManager_0x1425b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgEndFrame__FP14mgCDrawManager_0x1425b0");
#endif

    switch (ctx->pc) {
        case 0x142690u: goto label_142690;
        case 0x14271cu: goto label_14271c;
        case 0x14272cu: goto label_14272c;
        case 0x142738u: goto label_142738;
        case 0x142744u: goto label_142744;
        case 0x142750u: goto label_142750;
        case 0x14275cu: goto label_14275c;
        case 0x142768u: goto label_142768;
        case 0x142780u: goto label_142780;
        case 0x1427b8u: goto label_1427b8;
        case 0x1427d8u: goto label_1427d8;
        case 0x1427ecu: goto label_1427ec;
        case 0x142804u: goto label_142804;
        case 0x142818u: goto label_142818;
        case 0x142830u: goto label_142830;
        case 0x142868u: goto label_142868;
        case 0x1428a0u: goto label_1428a0;
        case 0x1428bcu: goto label_1428bc;
        case 0x1428d0u: goto label_1428d0;
        case 0x1428f8u: goto label_1428f8;
        case 0x14292cu: goto label_14292c;
        case 0x142944u: goto label_142944;
        case 0x14295cu: goto label_14295c;
        case 0x142970u: goto label_142970;
        case 0x142994u: goto label_142994;
        case 0x1429a8u: goto label_1429a8;
        case 0x1429ccu: goto label_1429cc;
        case 0x1429d4u: goto label_1429d4;
        case 0x1429dcu: goto label_1429dc;
        case 0x142a08u: goto label_142a08;
        case 0x142a50u: goto label_142a50;
        case 0x142a60u: goto label_142a60;
        case 0x142a94u: goto label_142a94;
        case 0x142a9cu: goto label_142a9c;
        case 0x142c44u: goto label_142c44;
        case 0x142c54u: goto label_142c54;
        case 0x142c64u: goto label_142c64;
        case 0x142e64u: goto label_142e64;
        default: break;
    }

    ctx->pc = 0x1425b0u;

    // 0x1425b0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1425b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x1425b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1425b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1425b8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1425b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1425bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1425bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1425c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1425c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1425c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1425c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1425c8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1425c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1425cc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1425ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1425d0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1425d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1425d4: 0x8f848760  lw          $a0, -0x78A0($gp)
    ctx->pc = 0x1425d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936416)));
    // 0x1425d8: 0x83828874  lb          $v0, -0x778C($gp)
    ctx->pc = 0x1425d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936692)));
    // 0x1425dc: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x1425dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x1425e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1425e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1425e4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1425e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1425e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1425e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1425ec: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1425ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1425f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1425f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1425f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1425F4u;
    {
        const bool branch_taken_0x1425f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1425F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1425F4u;
            // 0x1425f8: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1425f4) {
            ctx->pc = 0x142608u;
            goto label_142608;
        }
    }
    ctx->pc = 0x1425FCu;
    // 0x1425fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1425fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142600: 0xaf828870  sw          $v0, -0x7790($gp)
    ctx->pc = 0x142600u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936688), GPR_U32(ctx, 2));
    // 0x142604: 0xa3828874  sb          $v0, -0x778C($gp)
    ctx->pc = 0x142604u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936692), (uint8_t)GPR_U32(ctx, 2));
label_142608:
    // 0x142608: 0x8382887c  lb          $v0, -0x7784($gp)
    ctx->pc = 0x142608u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936700)));
    // 0x14260c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14260Cu;
    {
        const bool branch_taken_0x14260c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x142610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14260Cu;
            // 0x142610: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14260c) {
            ctx->pc = 0x14261Cu;
            goto label_14261c;
        }
    }
    ctx->pc = 0x142614u;
    // 0x142614: 0xaf808878  sw          $zero, -0x7788($gp)
    ctx->pc = 0x142614u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936696), GPR_U32(ctx, 0));
    // 0x142618: 0xa382887c  sb          $v0, -0x7784($gp)
    ctx->pc = 0x142618u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936700), (uint8_t)GPR_U32(ctx, 2));
label_14261c:
    // 0x14261c: 0x83828884  lb          $v0, -0x777C($gp)
    ctx->pc = 0x14261cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936708)));
    // 0x142620: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x142620u;
    {
        const bool branch_taken_0x142620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x142624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142620u;
            // 0x142624: 0x3c011000  lui         $at, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142620) {
            ctx->pc = 0x142634u;
            goto label_142634;
        }
    }
    ctx->pc = 0x142628u;
    // 0x142628: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14262c: 0xaf808880  sw          $zero, -0x7780($gp)
    ctx->pc = 0x14262cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936704), GPR_U32(ctx, 0));
    // 0x142630: 0xa3828884  sb          $v0, -0x777C($gp)
    ctx->pc = 0x142630u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936708), (uint8_t)GPR_U32(ctx, 2));
label_142634:
    // 0x142634: 0x8f828864  lw          $v0, -0x779C($gp)
    ctx->pc = 0x142634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936676)));
    // 0x142638: 0x8c230000  lw          $v1, 0x0($at)
    ctx->pc = 0x142638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 0)));
    // 0x14263c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14263cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x142640: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x142640u;
    {
        const bool branch_taken_0x142640 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x142644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142640u;
            // 0x142644: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142640) {
            ctx->pc = 0x142654u;
            goto label_142654;
        }
    }
    ctx->pc = 0x142648u;
    // 0x142648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14264c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14264Cu;
    {
        const bool branch_taken_0x14264c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14264Cu;
            // 0x142650: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14264c) {
            ctx->pc = 0x14266Cu;
            goto label_14266c;
        }
    }
    ctx->pc = 0x142654u;
label_142654:
    // 0x142654: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x142654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x142658: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x142658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14265c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14265cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142660: 0x0  nop
    ctx->pc = 0x142660u;
    // NOP
    // 0x142664: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x142664u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x142668: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x142668u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_14266c:
    // 0x14266c: 0x0  nop
    ctx->pc = 0x14266cu;
    // NOP
    // 0x142670: 0x0  nop
    ctx->pc = 0x142670u;
    // NOP
    // 0x142674: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x142674u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x142678: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x142678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x14267c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14267cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142680: 0x0  nop
    ctx->pc = 0x142680u;
    // NOP
    // 0x142684: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x142684u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x142688: 0xc050bd0  jal         func_142F40
    ctx->pc = 0x142688u;
    SET_GPR_U32(ctx, 31, 0x142690u);
    ctx->pc = 0x14268Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142688u;
            // 0x14268c: 0xe7808878  swc1        $f0, -0x7788($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936696), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142F40u;
    if (runtime->hasFunction(0x142F40u)) {
        auto targetFn = runtime->lookupFunction(0x142F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142690u; }
        if (ctx->pc != 0x142690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgWaitFrame__Fv_0x142f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142690u; }
        if (ctx->pc != 0x142690u) { return; }
    }
    ctx->pc = 0x142690u;
label_142690:
    // 0x142690: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x142690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x142694: 0x8f828840  lw          $v0, -0x77C0($gp)
    ctx->pc = 0x142694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936640)));
    // 0x142698: 0x104000ce  beqz        $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x142698u;
    {
        const bool branch_taken_0x142698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14269Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142698u;
            // 0x14269c: 0x8c300000  lw          $s0, 0x0($at) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142698) {
            ctx->pc = 0x1429D4u;
            goto label_1429d4;
        }
    }
    ctx->pc = 0x1426A0u;
    // 0x1426a0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1426a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1426a4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1426a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1426a8: 0x8c23213c  lw          $v1, 0x213C($at)
    ctx->pc = 0x1426a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8508)));
    // 0x1426ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1426acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1426b0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1426b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1426b4: 0x8c650028  lw          $a1, 0x28($v1)
    ctx->pc = 0x1426b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1426b8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1426b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1426bc: 0x8c222140  lw          $v0, 0x2140($at)
    ctx->pc = 0x1426bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8512)));
    // 0x1426c0: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x1426c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1426c4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1426c4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1426c8: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x1426c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1426cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1426ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1426d0: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x1426d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1426d4: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1426d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1426d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1426d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1426dc: 0x0  nop
    ctx->pc = 0x1426dcu;
    // NOP
    // 0x1426e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1426e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1426e4: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1426e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1426e8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1426e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1426ec: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x1426ecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1426f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1426f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1426f4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1426f4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1426f8: 0x0  nop
    ctx->pc = 0x1426f8u;
    // NOP
    // 0x1426fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1426fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x142700: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x142700u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x142704: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x142704u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x142708: 0x46000d83  div.s       $f22, $f1, $f0
    ctx->pc = 0x142708u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x14270c: 0x0  nop
    ctx->pc = 0x14270cu;
    // NOP
    // 0x142710: 0x0  nop
    ctx->pc = 0x142710u;
    // NOP
    // 0x142714: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x142714u;
    SET_GPR_U32(ctx, 31, 0x14271Cu);
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14271Cu; }
        if (ctx->pc != 0x14271Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14271Cu; }
        if (ctx->pc != 0x14271Cu) { return; }
    }
    ctx->pc = 0x14271Cu;
label_14271c:
    // 0x14271c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x14271cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x142720: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x142720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142724: 0xc04d104  jal         func_134410
    ctx->pc = 0x142724u;
    SET_GPR_U32(ctx, 31, 0x14272Cu);
    ctx->pc = 0x142728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142724u;
            // 0x142728: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14272Cu; }
        if (ctx->pc != 0x14272Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14272Cu; }
        if (ctx->pc != 0x14272Cu) { return; }
    }
    ctx->pc = 0x14272Cu;
label_14272c:
    // 0x14272c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x14272cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x142730: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x142730u;
    SET_GPR_U32(ctx, 31, 0x142738u);
    ctx->pc = 0x142734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142730u;
            // 0x142734: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142738u; }
        if (ctx->pc != 0x142738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142738u; }
        if (ctx->pc != 0x142738u) { return; }
    }
    ctx->pc = 0x142738u;
label_142738:
    // 0x142738: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x142738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14273c: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x14273Cu;
    SET_GPR_U32(ctx, 31, 0x142744u);
    ctx->pc = 0x142740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14273Cu;
            // 0x142740: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142744u; }
        if (ctx->pc != 0x142744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142744u; }
        if (ctx->pc != 0x142744u) { return; }
    }
    ctx->pc = 0x142744u;
label_142744:
    // 0x142744: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x142744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x142748: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x142748u;
    SET_GPR_U32(ctx, 31, 0x142750u);
    ctx->pc = 0x14274Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142748u;
            // 0x14274c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142750u; }
        if (ctx->pc != 0x142750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142750u; }
        if (ctx->pc != 0x142750u) { return; }
    }
    ctx->pc = 0x142750u;
label_142750:
    // 0x142750: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x142750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x142754: 0xc04d424  jal         func_135090
    ctx->pc = 0x142754u;
    SET_GPR_U32(ctx, 31, 0x14275Cu);
    ctx->pc = 0x142758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142754u;
            // 0x142758: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14275Cu; }
        if (ctx->pc != 0x14275Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14275Cu; }
        if (ctx->pc != 0x14275Cu) { return; }
    }
    ctx->pc = 0x14275Cu;
label_14275c:
    // 0x14275c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x14275cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x142760: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x142760u;
    SET_GPR_U32(ctx, 31, 0x142768u);
    ctx->pc = 0x142764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142760u;
            // 0x142764: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142768u; }
        if (ctx->pc != 0x142768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142768u; }
        if (ctx->pc != 0x142768u) { return; }
    }
    ctx->pc = 0x142768u;
label_142768:
    // 0x142768: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x142768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14276c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x14276cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x142770: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x142770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142774: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x142774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142778: 0xc04d320  jal         func_134C80
    ctx->pc = 0x142778u;
    SET_GPR_U32(ctx, 31, 0x142780u);
    ctx->pc = 0x14277Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142778u;
            // 0x14277c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142780u; }
        if (ctx->pc != 0x142780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142780u; }
        if (ctx->pc != 0x142780u) { return; }
    }
    ctx->pc = 0x142780u;
label_142780:
    // 0x142780: 0xc7808880  lwc1        $f0, -0x7780($gp)
    ctx->pc = 0x142780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142784: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x142784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x142788: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x142788u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14278c: 0x0  nop
    ctx->pc = 0x14278cu;
    // NOP
    // 0x142790: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x142790u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142794: 0x0  nop
    ctx->pc = 0x142794u;
    // NOP
    // 0x142798: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x142798u;
    {
        const bool branch_taken_0x142798 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14279Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142798u;
            // 0x14279c: 0x2451ffd8  addiu       $s1, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142798) {
            ctx->pc = 0x1427C0u;
            goto label_1427c0;
        }
    }
    ctx->pc = 0x1427A0u;
    // 0x1427a0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1427a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1427a4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1427a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1427a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1427a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1427ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1427acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1427b0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1427B0u;
    SET_GPR_U32(ctx, 31, 0x1427B8u);
    ctx->pc = 0x1427B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1427B0u;
            // 0x1427b4: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1427B8u; }
        if (ctx->pc != 0x1427B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1427B8u; }
        if (ctx->pc != 0x1427B8u) { return; }
    }
    ctx->pc = 0x1427B8u;
label_1427b8:
    // 0x1427b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1427B8u;
    {
        const bool branch_taken_0x1427b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1427BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1427B8u;
            // 0x1427bc: 0x8f858780  lw          $a1, -0x7880($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1427b8) {
            ctx->pc = 0x1427DCu;
            goto label_1427dc;
        }
    }
    ctx->pc = 0x1427C0u;
label_1427c0:
    // 0x1427c0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1427c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1427c4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1427c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1427c8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1427c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1427cc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1427ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1427d0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1427D0u;
    SET_GPR_U32(ctx, 31, 0x1427D8u);
    ctx->pc = 0x1427D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1427D0u;
            // 0x1427d4: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1427D8u; }
        if (ctx->pc != 0x1427D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1427D8u; }
        if (ctx->pc != 0x1427D8u) { return; }
    }
    ctx->pc = 0x1427D8u;
label_1427d8:
    // 0x1427d8: 0x8f858780  lw          $a1, -0x7880($gp)
    ctx->pc = 0x1427d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_1427dc:
    // 0x1427dc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1427dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1427e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1427e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1427e4: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1427E4u;
    SET_GPR_U32(ctx, 31, 0x1427ECu);
    ctx->pc = 0x1427E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1427E4u;
            // 0x1427e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1427ECu; }
        if (ctx->pc != 0x1427ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1427ECu; }
        if (ctx->pc != 0x1427ECu) { return; }
    }
    ctx->pc = 0x1427ECu;
label_1427ec:
    // 0x1427ec: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x1427ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x1427f0: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x1427f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1427f4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1427f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1427f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1427f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1427fc: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1427FCu;
    SET_GPR_U32(ctx, 31, 0x142804u);
    ctx->pc = 0x142800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1427FCu;
            // 0x142800: 0x2445ff9c  addiu       $a1, $v0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142804u; }
        if (ctx->pc != 0x142804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142804u; }
        if (ctx->pc != 0x142804u) { return; }
    }
    ctx->pc = 0x142804u;
label_142804:
    // 0x142804: 0x8f858780  lw          $a1, -0x7880($gp)
    ctx->pc = 0x142804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x142808: 0x2626000c  addiu       $a2, $s1, 0xC
    ctx->pc = 0x142808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x14280c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x14280cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x142810: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x142810u;
    SET_GPR_U32(ctx, 31, 0x142818u);
    ctx->pc = 0x142814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142810u;
            // 0x142814: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142818u; }
        if (ctx->pc != 0x142818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142818u; }
        if (ctx->pc != 0x142818u) { return; }
    }
    ctx->pc = 0x142818u;
label_142818:
    // 0x142818: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x142818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x14281c: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x14281cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x142820: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x142820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x142824: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x142824u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142828: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x142828u;
    SET_GPR_U32(ctx, 31, 0x142830u);
    ctx->pc = 0x14282Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142828u;
            // 0x14282c: 0x2445ff9c  addiu       $a1, $v0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142830u; }
        if (ctx->pc != 0x142830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142830u; }
        if (ctx->pc != 0x142830u) { return; }
    }
    ctx->pc = 0x142830u;
label_142830:
    // 0x142830: 0xc7818878  lwc1        $f1, -0x7788($gp)
    ctx->pc = 0x142830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x142834: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x142834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x142838: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14283c: 0x0  nop
    ctx->pc = 0x14283cu;
    // NOP
    // 0x142840: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x142840u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142844: 0x0  nop
    ctx->pc = 0x142844u;
    // NOP
    // 0x142848: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x142848u;
    {
        const bool branch_taken_0x142848 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14284Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142848u;
            // 0x14284c: 0x3c024248  lui         $v0, 0x4248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142848) {
            ctx->pc = 0x142870u;
            goto label_142870;
        }
    }
    ctx->pc = 0x142850u;
    // 0x142850: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x142850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x142854: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x142854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x142858: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x142858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14285c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14285cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142860: 0xc04d320  jal         func_134C80
    ctx->pc = 0x142860u;
    SET_GPR_U32(ctx, 31, 0x142868u);
    ctx->pc = 0x142864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142860u;
            // 0x142864: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142868u; }
        if (ctx->pc != 0x142868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142868u; }
        if (ctx->pc != 0x142868u) { return; }
    }
    ctx->pc = 0x142868u;
label_142868:
    // 0x142868: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x142868u;
    {
        const bool branch_taken_0x142868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14286Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142868u;
            // 0x14286c: 0x8f858780  lw          $a1, -0x7880($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142868) {
            ctx->pc = 0x1428C0u;
            goto label_1428c0;
        }
    }
    ctx->pc = 0x142870u;
label_142870:
    // 0x142870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142874: 0x0  nop
    ctx->pc = 0x142874u;
    // NOP
    // 0x142878: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x142878u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14287c: 0x0  nop
    ctx->pc = 0x14287cu;
    // NOP
    // 0x142880: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x142880u;
    {
        const bool branch_taken_0x142880 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x142884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142880u;
            // 0x142884: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142880) {
            ctx->pc = 0x1428A8u;
            goto label_1428a8;
        }
    }
    ctx->pc = 0x142888u;
    // 0x142888: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x142888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x14288c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x14288cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x142890: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x142890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142894: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x142894u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142898: 0xc04d320  jal         func_134C80
    ctx->pc = 0x142898u;
    SET_GPR_U32(ctx, 31, 0x1428A0u);
    ctx->pc = 0x14289Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142898u;
            // 0x14289c: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1428A0u; }
        if (ctx->pc != 0x1428A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1428A0u; }
        if (ctx->pc != 0x1428A0u) { return; }
    }
    ctx->pc = 0x1428A0u;
label_1428a0:
    // 0x1428a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1428A0u;
    {
        const bool branch_taken_0x1428a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1428a0) {
            ctx->pc = 0x1428BCu;
            goto label_1428bc;
        }
    }
    ctx->pc = 0x1428A8u;
label_1428a8:
    // 0x1428a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1428a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1428ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1428acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1428b0: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1428b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1428b4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1428B4u;
    SET_GPR_U32(ctx, 31, 0x1428BCu);
    ctx->pc = 0x1428B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1428B4u;
            // 0x1428b8: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1428BCu; }
        if (ctx->pc != 0x1428BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1428BCu; }
        if (ctx->pc != 0x1428BCu) { return; }
    }
    ctx->pc = 0x1428BCu;
label_1428bc:
    // 0x1428bc: 0x8f858780  lw          $a1, -0x7880($gp)
    ctx->pc = 0x1428bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_1428c0:
    // 0x1428c0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1428c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1428c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1428c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1428c8: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1428C8u;
    SET_GPR_U32(ctx, 31, 0x1428D0u);
    ctx->pc = 0x1428CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1428C8u;
            // 0x1428cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1428D0u; }
        if (ctx->pc != 0x1428D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1428D0u; }
        if (ctx->pc != 0x1428D0u) { return; }
    }
    ctx->pc = 0x1428D0u;
label_1428d0:
    // 0x1428d0: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x1428d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1428d4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1428d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1428d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1428d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1428dc: 0xc7828780  lwc1        $f2, -0x7880($gp)
    ctx->pc = 0x1428dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1428e0: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x1428e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x1428e4: 0xc7818878  lwc1        $f1, -0x7788($gp)
    ctx->pc = 0x1428e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1428e8: 0x46801020  cvt.s.w     $f0, $f2
    ctx->pc = 0x1428e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1428ec: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1428ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1428f0: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1428F0u;
    SET_GPR_U32(ctx, 31, 0x1428F8u);
    ctx->pc = 0x1428F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1428F0u;
            // 0x1428f4: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1428F8u; }
        if (ctx->pc != 0x1428F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1428F8u; }
        if (ctx->pc != 0x1428F8u) { return; }
    }
    ctx->pc = 0x1428F8u;
label_1428f8:
    // 0x1428f8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1428f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1428fc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1428fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x142900: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x142900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x142904: 0xc7818880  lwc1        $f1, -0x7780($gp)
    ctx->pc = 0x142904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x142908: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x142908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x14290c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14290cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142910: 0xc7838780  lwc1        $f3, -0x7880($gp)
    ctx->pc = 0x142910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x142914: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x142914u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x142918: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x142918u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x14291c: 0x46801860  cvt.s.w     $f1, $f3
    ctx->pc = 0x14291cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x142920: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x142920u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x142924: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x142924u;
    SET_GPR_U32(ctx, 31, 0x14292Cu);
    ctx->pc = 0x142928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142924u;
            // 0x142928: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14292Cu; }
        if (ctx->pc != 0x14292Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14292Cu; }
        if (ctx->pc != 0x14292Cu) { return; }
    }
    ctx->pc = 0x14292Cu;
label_14292c:
    // 0x14292c: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x14292cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x142930: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x142930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x142934: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x142934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x142938: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x142938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14293c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x14293Cu;
    SET_GPR_U32(ctx, 31, 0x142944u);
    ctx->pc = 0x142940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14293Cu;
            // 0x142940: 0x2445ff9c  addiu       $a1, $v0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142944u; }
        if (ctx->pc != 0x142944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142944u; }
        if (ctx->pc != 0x142944u) { return; }
    }
    ctx->pc = 0x142944u;
label_142944:
    // 0x142944: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x142944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x142948: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x142948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14294c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x14294cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x142950: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x142950u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142954: 0xc04d320  jal         func_134C80
    ctx->pc = 0x142954u;
    SET_GPR_U32(ctx, 31, 0x14295Cu);
    ctx->pc = 0x142958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142954u;
            // 0x142958: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14295Cu; }
        if (ctx->pc != 0x14295Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14295Cu; }
        if (ctx->pc != 0x14295Cu) { return; }
    }
    ctx->pc = 0x14295Cu;
label_14295c:
    // 0x14295c: 0x8f858780  lw          $a1, -0x7880($gp)
    ctx->pc = 0x14295cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x142960: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x142960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x142964: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x142964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x142968: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x142968u;
    SET_GPR_U32(ctx, 31, 0x142970u);
    ctx->pc = 0x14296Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142968u;
            // 0x14296c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142970u; }
        if (ctx->pc != 0x142970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142970u; }
        if (ctx->pc != 0x142970u) { return; }
    }
    ctx->pc = 0x142970u;
label_142970:
    // 0x142970: 0x26220018  addiu       $v0, $s1, 0x18
    ctx->pc = 0x142970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x142974: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x142974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x142978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14297c: 0xc7818780  lwc1        $f1, -0x7880($gp)
    ctx->pc = 0x14297cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x142980: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x142980u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x142984: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x142984u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x142988: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x142988u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x14298c: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x14298Cu;
    SET_GPR_U32(ctx, 31, 0x142994u);
    ctx->pc = 0x142990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14298Cu;
            // 0x142990: 0x46150301  sub.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142994u; }
        if (ctx->pc != 0x142994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142994u; }
        if (ctx->pc != 0x142994u) { return; }
    }
    ctx->pc = 0x142994u;
label_142994:
    // 0x142994: 0x8f858780  lw          $a1, -0x7880($gp)
    ctx->pc = 0x142994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x142998: 0x2626001c  addiu       $a2, $s1, 0x1C
    ctx->pc = 0x142998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x14299c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x14299cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1429a0: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1429A0u;
    SET_GPR_U32(ctx, 31, 0x1429A8u);
    ctx->pc = 0x1429A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1429A0u;
            // 0x1429a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1429A8u; }
        if (ctx->pc != 0x1429A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1429A8u; }
        if (ctx->pc != 0x1429A8u) { return; }
    }
    ctx->pc = 0x1429A8u;
label_1429a8:
    // 0x1429a8: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x1429a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1429ac: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1429acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1429b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1429b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1429b4: 0xc7818780  lwc1        $f1, -0x7880($gp)
    ctx->pc = 0x1429b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1429b8: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x1429b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x1429bc: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x1429bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1429c0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1429c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1429c4: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1429C4u;
    SET_GPR_U32(ctx, 31, 0x1429CCu);
    ctx->pc = 0x1429C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1429C4u;
            // 0x1429c8: 0x46160301  sub.s       $f12, $f0, $f22 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1429CCu; }
        if (ctx->pc != 0x1429CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1429CCu; }
        if (ctx->pc != 0x1429CCu) { return; }
    }
    ctx->pc = 0x1429CCu;
label_1429cc:
    // 0x1429cc: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1429CCu;
    SET_GPR_U32(ctx, 31, 0x1429D4u);
    ctx->pc = 0x1429D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1429CCu;
            // 0x1429d0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1429D4u; }
        if (ctx->pc != 0x1429D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1429D4u; }
        if (ctx->pc != 0x1429D4u) { return; }
    }
    ctx->pc = 0x1429D4u;
label_1429d4:
    // 0x1429d4: 0xc050bc4  jal         func_142F10
    ctx->pc = 0x1429D4u;
    SET_GPR_U32(ctx, 31, 0x1429DCu);
    ctx->pc = 0x1429D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1429D4u;
            // 0x1429d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142F10u;
    if (runtime->hasFunction(0x142F10u)) {
        auto targetFn = runtime->lookupFunction(0x142F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1429DCu; }
        if (ctx->pc != 0x1429DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgEndPacket__FP14mgCDrawManager_0x142f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1429DCu; }
        if (ctx->pc != 0x1429DCu) { return; }
    }
    ctx->pc = 0x1429DCu;
label_1429dc:
    // 0x1429dc: 0x8f828850  lw          $v0, -0x77B0($gp)
    ctx->pc = 0x1429dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936656)));
    // 0x1429e0: 0x8f848854  lw          $a0, -0x77AC($gp)
    ctx->pc = 0x1429e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936660)));
    // 0x1429e4: 0x8f858760  lw          $a1, -0x78A0($gp)
    ctx->pc = 0x1429e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936416)));
    // 0x1429e8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1429e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1429ec: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1429ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1429f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1429F0u;
    {
        const bool branch_taken_0x1429f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1429F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1429F0u;
            // 0x1429f4: 0xaf808858  sw          $zero, -0x77A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936664), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1429f0) {
            ctx->pc = 0x142A00u;
            goto label_142a00;
        }
    }
    ctx->pc = 0x1429F8u;
    // 0x1429f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1429f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1429fc: 0xaf828858  sw          $v0, -0x77A8($gp)
    ctx->pc = 0x1429fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936664), GPR_U32(ctx, 2));
label_142a00:
    // 0x142a00: 0xc0504a8  jal         func_1412A0
    ctx->pc = 0x142A00u;
    SET_GPR_U32(ctx, 31, 0x142A08u);
    ctx->pc = 0x1412A0u;
    if (runtime->hasFunction(0x1412A0u)) {
        auto targetFn = runtime->lookupFunction(0x1412A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142A08u; }
        if (ctx->pc != 0x142A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitVSync__Fii_0x1412a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142A08u; }
        if (ctx->pc != 0x142A08u) { return; }
    }
    ctx->pc = 0x142A08u;
label_142a08:
    // 0x142a08: 0x8f838850  lw          $v1, -0x77B0($gp)
    ctx->pc = 0x142a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936656)));
    // 0x142a0c: 0x8f828868  lw          $v0, -0x7798($gp)
    ctx->pc = 0x142a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936680)));
    // 0x142a10: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x142A10u;
    {
        const bool branch_taken_0x142a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142A10u;
            // 0x142a14: 0xaf838854  sw          $v1, -0x77AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936660), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142a10) {
            ctx->pc = 0x142A6Cu;
            goto label_142a6c;
        }
    }
    ctx->pc = 0x142A18u;
    // 0x142a18: 0x8f838760  lw          $v1, -0x78A0($gp)
    ctx->pc = 0x142a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936416)));
    // 0x142a1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142a20: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x142A20u;
    {
        const bool branch_taken_0x142a20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x142A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142A20u;
            // 0x142a24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142a20) {
            ctx->pc = 0x142A58u;
            goto label_142a58;
        }
    }
    ctx->pc = 0x142A28u;
    // 0x142a28: 0x8f83886c  lw          $v1, -0x7794($gp)
    ctx->pc = 0x142a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936684)));
    // 0x142a2c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x142A2Cu;
    {
        const bool branch_taken_0x142a2c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x142A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142A2Cu;
            // 0x142a30: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x142a2c) {
            ctx->pc = 0x142A40u;
            goto label_142a40;
        }
    }
    ctx->pc = 0x142A34u;
    // 0x142a34: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x142A34u;
    {
        const bool branch_taken_0x142a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142a34) {
            ctx->pc = 0x142A40u;
            goto label_142a40;
        }
    }
    ctx->pc = 0x142A3Cu;
    // 0x142a3c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x142a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_142a40:
    // 0x142a40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x142A40u;
    {
        const bool branch_taken_0x142a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142A40u;
            // 0x142a44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142a40) {
            ctx->pc = 0x142A60u;
            goto label_142a60;
        }
    }
    ctx->pc = 0x142A48u;
    // 0x142a48: 0xc0517d4  jal         func_145F50
    ctx->pc = 0x142A48u;
    SET_GPR_U32(ctx, 31, 0x142A50u);
    ctx->pc = 0x145F50u;
    if (runtime->hasFunction(0x145F50u)) {
        auto targetFn = runtime->lookupFunction(0x145F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142A50u; }
        if (ctx->pc != 0x142A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StoreImage__Fi_0x145f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142A50u; }
        if (ctx->pc != 0x142A50u) { return; }
    }
    ctx->pc = 0x142A50u;
label_142a50:
    // 0x142a50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x142A50u;
    {
        const bool branch_taken_0x142a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142A50u;
            // 0x142a54: 0x8f82886c  lw          $v0, -0x7794($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142a50) {
            ctx->pc = 0x142A64u;
            goto label_142a64;
        }
    }
    ctx->pc = 0x142A58u;
label_142a58:
    // 0x142a58: 0xc0517d4  jal         func_145F50
    ctx->pc = 0x142A58u;
    SET_GPR_U32(ctx, 31, 0x142A60u);
    ctx->pc = 0x145F50u;
    if (runtime->hasFunction(0x145F50u)) {
        auto targetFn = runtime->lookupFunction(0x145F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142A60u; }
        if (ctx->pc != 0x142A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StoreImage__Fi_0x145f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142A60u; }
        if (ctx->pc != 0x142A60u) { return; }
    }
    ctx->pc = 0x142A60u;
label_142a60:
    // 0x142a60: 0x8f82886c  lw          $v0, -0x7794($gp)
    ctx->pc = 0x142a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936684)));
label_142a64:
    // 0x142a64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x142a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x142a68: 0xaf82886c  sw          $v0, -0x7794($gp)
    ctx->pc = 0x142a68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936684), GPR_U32(ctx, 2));
label_142a6c:
    // 0x142a6c: 0x8f82883c  lw          $v0, -0x77C4($gp)
    ctx->pc = 0x142a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936636)));
    // 0x142a70: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x142A70u;
    {
        const bool branch_taken_0x142a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142A70u;
            // 0x142a74: 0xaf808868  sw          $zero, -0x7798($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936680), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142a70) {
            ctx->pc = 0x142A9Cu;
            goto label_142a9c;
        }
    }
    ctx->pc = 0x142A78u;
    // 0x142a78: 0x8f848018  lw          $a0, -0x7FE8($gp)
    ctx->pc = 0x142a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x142a7c: 0x4800007  bltz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x142A7Cu;
    {
        const bool branch_taken_0x142a7c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x142a7c) {
            ctx->pc = 0x142A9Cu;
            goto label_142a9c;
        }
    }
    ctx->pc = 0x142A84u;
    // 0x142a84: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x142A84u;
    {
        const bool branch_taken_0x142a84 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x142A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142A84u;
            // 0x142a88: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142a84) {
            ctx->pc = 0x142A94u;
            goto label_142a94;
        }
    }
    ctx->pc = 0x142A8Cu;
    // 0x142a8c: 0xc041608  jal         func_105820
    ctx->pc = 0x142A8Cu;
    SET_GPR_U32(ctx, 31, 0x142A94u);
    ctx->pc = 0x105820u;
    if (runtime->hasFunction(0x105820u)) {
        auto targetFn = runtime->lookupFunction(0x105820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142A94u; }
        if (ctx->pc != 0x142A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevConsAttribute_0x105820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142A94u; }
        if (ctx->pc != 0x142A94u) { return; }
    }
    ctx->pc = 0x142A94u;
label_142a94:
    // 0x142a94: 0xc04141a  jal         func_105068
    ctx->pc = 0x142A94u;
    SET_GPR_U32(ctx, 31, 0x142A9Cu);
    ctx->pc = 0x142A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142A94u;
            // 0x142a98: 0x8f848018  lw          $a0, -0x7FE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105068u;
    if (runtime->hasFunction(0x105068u)) {
        auto targetFn = runtime->lookupFunction(0x105068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142A9Cu; }
        if (ctx->pc != 0x142A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevConsDraw_0x105068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142A9Cu; }
        if (ctx->pc != 0x142A9Cu) { return; }
    }
    ctx->pc = 0x142A9Cu;
label_142a9c:
    // 0x142a9c: 0x8f82875c  lw          $v0, -0x78A4($gp)
    ctx->pc = 0x142a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936412)));
    // 0x142aa0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x142AA0u;
    {
        const bool branch_taken_0x142aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142AA0u;
            // 0x142aa4: 0xaf80883c  sw          $zero, -0x77C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936636), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142aa0) {
            ctx->pc = 0x142AD0u;
            goto label_142ad0;
        }
    }
    ctx->pc = 0x142AA8u;
    // 0x142aa8: 0x8f848818  lw          $a0, -0x77E8($gp)
    ctx->pc = 0x142aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x142aac: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x142aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x142ab0: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x142ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x142ab4: 0x24057f23  addiu       $a1, $zero, 0x7F23
    ctx->pc = 0x142ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32547));
    // 0x142ab8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x142ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x142abc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x142abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x142ac0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x142ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x142ac4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x142ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x142ac8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x142AC8u;
    {
        const bool branch_taken_0x142ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142AC8u;
            // 0x142acc: 0xfc450000  sd          $a1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ac8) {
            ctx->pc = 0x142AFCu;
            goto label_142afc;
        }
    }
    ctx->pc = 0x142AD0u;
label_142ad0:
    // 0x142ad0: 0x3405ff23  ori         $a1, $zero, 0xFF23
    ctx->pc = 0x142ad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65315);
    // 0x142ad4: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x142ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
    // 0x142ad8: 0xfc250000  sd          $a1, 0x0($at)
    ctx->pc = 0x142ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 0), GPR_U64(ctx, 5));
    // 0x142adc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x142adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x142ae0: 0x8f848818  lw          $a0, -0x77E8($gp)
    ctx->pc = 0x142ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x142ae4: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x142ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x142ae8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x142ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x142aec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x142aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x142af0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x142af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x142af4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x142af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x142af8: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x142af8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
label_142afc:
    // 0x142afc: 0x8f838818  lw          $v1, -0x77E8($gp)
    ctx->pc = 0x142afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x142b00: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x142b00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x142b04: 0x24a52160  addiu       $a1, $a1, 0x2160
    ctx->pc = 0x142b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8544));
    // 0x142b08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x142b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142b0c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x142b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x142b10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x142b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x142b14: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x142b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x142b18: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x142b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x142b1c: 0xfc400020  sd          $zero, 0x20($v0)
    ctx->pc = 0x142b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 0));
    // 0x142b20: 0x8f838818  lw          $v1, -0x77E8($gp)
    ctx->pc = 0x142b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x142b24: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x142b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x142b28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x142b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x142b2c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x142b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x142b30: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x142b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x142b34: 0xfc440008  sd          $a0, 0x8($v0)
    ctx->pc = 0x142b34u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
    // 0x142b38: 0x8f848818  lw          $a0, -0x77E8($gp)
    ctx->pc = 0x142b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x142b3c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x142B3Cu;
    {
        const bool branch_taken_0x142b3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x142B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142B3Cu;
            // 0x142b40: 0x3c110038  lui         $s1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142b3c) {
            ctx->pc = 0x142B50u;
            goto label_142b50;
        }
    }
    ctx->pc = 0x142B44u;
    // 0x142b44: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x142b44u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x142b48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x142B48u;
    {
        const bool branch_taken_0x142b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142B48u;
            // 0x142b4c: 0x263122b0  addiu       $s1, $s1, 0x22B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142b48) {
            ctx->pc = 0x142B54u;
            goto label_142b54;
        }
    }
    ctx->pc = 0x142B50u;
label_142b50:
    // 0x142b50: 0x263121c0  addiu       $s1, $s1, 0x21C0
    ctx->pc = 0x142b50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8640));
label_142b54:
    // 0x142b54: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x142b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x142b58: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x142b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x142b5c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x142B5Cu;
    {
        const bool branch_taken_0x142b5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x142B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142B5Cu;
            // 0x142b60: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142b5c) {
            ctx->pc = 0x142B68u;
            goto label_142b68;
        }
    }
    ctx->pc = 0x142B64u;
    // 0x142b64: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x142b64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_142b68:
    // 0x142b68: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x142b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x142b6c: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x142b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x142b70: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x142b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x142b74: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x142B74u;
    {
        const bool branch_taken_0x142b74 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x142B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142B74u;
            // 0x142b78: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142b74) {
            ctx->pc = 0x142B84u;
            goto label_142b84;
        }
    }
    ctx->pc = 0x142B7Cu;
    // 0x142b7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x142b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x142b80: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x142b80u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_142b84:
    // 0x142b84: 0x92280002  lbu         $t0, 0x2($s1)
    ctx->pc = 0x142b84u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x142b88: 0x24620032  addiu       $v0, $v1, 0x32
    ctx->pc = 0x142b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x142b8c: 0x96260000  lhu         $a2, 0x0($s1)
    ctx->pc = 0x142b8cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x142b90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x142b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x142b94: 0x92250003  lbu         $a1, 0x3($s1)
    ctx->pc = 0x142b94u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x142b98: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x142b98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x142b9c: 0x21338  dsll        $v0, $v0, 12
    ctx->pc = 0x142b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 12);
    // 0x142ba0: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x142ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x142ba4: 0x3443027c  ori         $v1, $v0, 0x27C
    ctx->pc = 0x142ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)636);
    // 0x142ba8: 0x24e72160  addiu       $a3, $a3, 0x2160
    ctx->pc = 0x142ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8544));
    // 0x142bac: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x142bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x142bb0: 0x3108003f  andi        $t0, $t0, 0x3F
    ctx->pc = 0x142bb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
    // 0x142bb4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x142bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x142bb8: 0x84278  dsll        $t0, $t0, 9
    ctx->pc = 0x142bb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 9);
    // 0x142bbc: 0x30c601ff  andi        $a2, $a2, 0x1FF
    ctx->pc = 0x142bbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)511);
    // 0x142bc0: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x142bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x142bc4: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x142bc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x142bc8: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x142bc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x142bcc: 0x52bf8  dsll        $a1, $a1, 15
    ctx->pc = 0x142bccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 15);
    // 0x142bd0: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x142bd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x142bd4: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x142bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x142bd8: 0xfc850010  sd          $a1, 0x10($a0)
    ctx->pc = 0x142bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 5));
    // 0x142bdc: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x142bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x142be0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x142be0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x142be4: 0x8f858780  lw          $a1, -0x7880($gp)
    ctx->pc = 0x142be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x142be8: 0x215f8  dsll        $v0, $v0, 23
    ctx->pc = 0x142be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 23);
    // 0x142bec: 0x26460001  addiu       $a2, $s2, 0x1
    ctx->pc = 0x142becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x142bf0: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x142bf0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x142bf4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x142bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142bf8: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x142bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x142bfc: 0x8f838818  lw          $v1, -0x77E8($gp)
    ctx->pc = 0x142bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x142c00: 0xa63018  mult        $a2, $a1, $a2
    ctx->pc = 0x142c00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x142c04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x142c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x142c08: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x142c08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x142c0c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x142c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x142c10: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x142c10u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x142c14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x142c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x142c18: 0x51b3c  dsll32      $v1, $a1, 12
    ctx->pc = 0x142c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 12));
    // 0x142c1c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x142c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x142c20: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x142c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x142c24: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x142c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x142c28: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x142c28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x142c2c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x142c2cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x142c30: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x142c30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x142c34: 0x2652825  or          $a1, $s3, $a1
    ctx->pc = 0x142c34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 5));
    // 0x142c38: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x142c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x142c3c: 0xc0440d8  jal         func_110360
    ctx->pc = 0x142C3Cu;
    SET_GPR_U32(ctx, 31, 0x142C44u);
    ctx->pc = 0x142C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142C3Cu;
            // 0x142c40: 0xfc430018  sd          $v1, 0x18($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110360u;
    if (runtime->hasFunction(0x110360u)) {
        auto targetFn = runtime->lookupFunction(0x110360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142C44u; }
        if (ctx->pc != 0x142C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x110360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142C44u; }
        if (ctx->pc != 0x142C44u) { return; }
    }
    ctx->pc = 0x142C44u;
label_142c44:
    // 0x142c44: 0x8f858818  lw          $a1, -0x77E8($gp)
    ctx->pc = 0x142c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x142c48: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x142c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x142c4c: 0xc040ca8  jal         func_1032A0
    ctx->pc = 0x142C4Cu;
    SET_GPR_U32(ctx, 31, 0x142C54u);
    ctx->pc = 0x142C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142C4Cu;
            // 0x142c50: 0x24842160  addiu       $a0, $a0, 0x2160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1032A0u;
    if (runtime->hasFunction(0x1032A0u)) {
        auto targetFn = runtime->lookupFunction(0x1032A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142C54u; }
        if (ctx->pc != 0x142C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSwapDBuff_0x1032a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142C54u; }
        if (ctx->pc != 0x142C54u) { return; }
    }
    ctx->pc = 0x142C54u;
label_142c54:
    // 0x142c54: 0x8f84876c  lw          $a0, -0x7894($gp)
    ctx->pc = 0x142c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
    // 0x142c58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x142c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142c5c: 0xc0412d8  jal         func_104B60
    ctx->pc = 0x142C5Cu;
    SET_GPR_U32(ctx, 31, 0x142C64u);
    ctx->pc = 0x142C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142C5Cu;
            // 0x142c60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104B60u;
    if (runtime->hasFunction(0x104B60u)) {
        auto targetFn = runtime->lookupFunction(0x104B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142C64u; }
        if (ctx->pc != 0x142C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSync_0x104b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142C64u; }
        if (ctx->pc != 0x142C64u) { return; }
    }
    ctx->pc = 0x142C64u;
label_142c64:
    // 0x142c64: 0x92260002  lbu         $a2, 0x2($s1)
    ctx->pc = 0x142c64u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x142c68: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x142c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x142c6c: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x142c6cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x142c70: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x142c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x142c74: 0x92240003  lbu         $a0, 0x3($s1)
    ctx->pc = 0x142c74u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x142c78: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x142c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
    // 0x142c7c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x142c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x142c80: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x142c80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x142c84: 0x63278  dsll        $a2, $a2, 9
    ctx->pc = 0x142c84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 9);
    // 0x142c88: 0x30a501ff  andi        $a1, $a1, 0x1FF
    ctx->pc = 0x142c88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)511);
    // 0x142c8c: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x142c8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x142c90: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x142c90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x142c94: 0x423f8  dsll        $a0, $a0, 15
    ctx->pc = 0x142c94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 15);
    // 0x142c98: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x142c98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x142c9c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x142c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x142ca0: 0xfc230070  sd          $v1, 0x70($at)
    ctx->pc = 0x142ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 112), GPR_U64(ctx, 3));
    // 0x142ca4: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x142ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x142ca8: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x142ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
    // 0x142cac: 0x8f838784  lw          $v1, -0x787C($gp)
    ctx->pc = 0x142cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x142cb0: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x142cb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x142cb4: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x142cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x142cb8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x142cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x142cbc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x142cbcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x142cc0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x142cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x142cc4: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x142cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x142cc8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x142cc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x142ccc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x142cccu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x142cd0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x142cd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x142cd4: 0x2642025  or          $a0, $s3, $a0
    ctx->pc = 0x142cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | GPR_U64(ctx, 4));
    // 0x142cd8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x142cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x142cdc: 0xfc230080  sd          $v1, 0x80($at)
    ctx->pc = 0x142cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 128), GPR_U64(ctx, 3));
    // 0x142ce0: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x142ce0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x142ce4: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x142ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
    // 0x142ce8: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x142ce8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x142cec: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x142cecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x142cf0: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x142cf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x142cf4: 0x52a78  dsll        $a1, $a1, 9
    ctx->pc = 0x142cf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 9);
    // 0x142cf8: 0x308401ff  andi        $a0, $a0, 0x1FF
    ctx->pc = 0x142cf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)511);
    // 0x142cfc: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x142cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x142d00: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x142d00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x142d04: 0x31bf8  dsll        $v1, $v1, 15
    ctx->pc = 0x142d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
    // 0x142d08: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x142d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x142d0c: 0xfc230090  sd          $v1, 0x90($at)
    ctx->pc = 0x142d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 144), GPR_U64(ctx, 3));
    // 0x142d10: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x142d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x142d14: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x142d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
    // 0x142d18: 0x8f838784  lw          $v1, -0x787C($gp)
    ctx->pc = 0x142d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x142d1c: 0x70821018  mult1       $v0, $a0, $v0
    ctx->pc = 0x142d1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x142d20: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x142d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x142d24: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x142d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x142d28: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x142d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x142d2c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x142d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x142d30: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x142d30u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x142d34: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x142d34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x142d38: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x142d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x142d3c: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x142d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x142d40: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x142d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x142d44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x142d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x142d48: 0xfc2200a0  sd          $v0, 0xA0($at)
    ctx->pc = 0x142d48u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 160), GPR_U64(ctx, 2));
    // 0x142d4c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x142d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x142d50: 0x8f828864  lw          $v0, -0x779C($gp)
    ctx->pc = 0x142d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936676)));
    // 0x142d54: 0x8c230000  lw          $v1, 0x0($at)
    ctx->pc = 0x142d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 0)));
    // 0x142d58: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x142d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x142d5c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x142D5Cu;
    {
        const bool branch_taken_0x142d5c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x142D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142D5Cu;
            // 0x142d60: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142d5c) {
            ctx->pc = 0x142D70u;
            goto label_142d70;
        }
    }
    ctx->pc = 0x142D64u;
    // 0x142d64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142d64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142d68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x142D68u;
    {
        const bool branch_taken_0x142d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142D68u;
            // 0x142d6c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x142d68) {
            ctx->pc = 0x142D88u;
            goto label_142d88;
        }
    }
    ctx->pc = 0x142D70u;
label_142d70:
    // 0x142d70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x142d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x142d74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x142d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x142d78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x142d78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142d7c: 0x0  nop
    ctx->pc = 0x142d7cu;
    // NOP
    // 0x142d80: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x142d80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x142d84: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x142d84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_142d88:
    // 0x142d88: 0x3c024383  lui         $v0, 0x4383
    ctx->pc = 0x142d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17283 << 16));
    // 0x142d8c: 0x8f848760  lw          $a0, -0x78A0($gp)
    ctx->pc = 0x142d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936416)));
    // 0x142d90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142d94: 0x0  nop
    ctx->pc = 0x142d94u;
    // NOP
    // 0x142d98: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x142d98u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x142d9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x142d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x142da0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x142da0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142da4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x142da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x142da8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x142da8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x142dac: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x142dacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x142db0: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x142db0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142db4: 0x0  nop
    ctx->pc = 0x142db4u;
    // NOP
    // 0x142db8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x142DB8u;
    {
        const bool branch_taken_0x142db8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x142DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142DB8u;
            // 0x142dbc: 0xe7828764  swc1        $f2, -0x789C($gp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936420), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x142db8) {
            ctx->pc = 0x142DD0u;
            goto label_142dd0;
        }
    }
    ctx->pc = 0x142DC0u;
    // 0x142dc0: 0x46011800  add.s       $f0, $f3, $f1
    ctx->pc = 0x142dc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x142dc4: 0xaf808880  sw          $zero, -0x7780($gp)
    ctx->pc = 0x142dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936704), GPR_U32(ctx, 0));
    // 0x142dc8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x142DC8u;
    {
        const bool branch_taken_0x142dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142DC8u;
            // 0x142dcc: 0xe7808764  swc1        $f0, -0x789C($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936420), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x142dc8) {
            ctx->pc = 0x142E28u;
            goto label_142e28;
        }
    }
    ctx->pc = 0x142DD0u;
label_142dd0:
    // 0x142dd0: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x142dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x142dd4: 0x8c220000  lw          $v0, 0x0($at)
    ctx->pc = 0x142dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 0)));
    // 0x142dd8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x142dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x142ddc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x142DDCu;
    {
        const bool branch_taken_0x142ddc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x142DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142DDCu;
            // 0x142de0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ddc) {
            ctx->pc = 0x142DF0u;
            goto label_142df0;
        }
    }
    ctx->pc = 0x142DE4u;
    // 0x142de4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142de8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x142DE8u;
    {
        const bool branch_taken_0x142de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142DE8u;
            // 0x142dec: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x142de8) {
            ctx->pc = 0x142E08u;
            goto label_142e08;
        }
    }
    ctx->pc = 0x142DF0u;
label_142df0:
    // 0x142df0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x142df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x142df4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x142df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x142df8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x142df8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142dfc: 0x0  nop
    ctx->pc = 0x142dfcu;
    // NOP
    // 0x142e00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x142e00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x142e04: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x142e04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_142e08:
    // 0x142e08: 0x0  nop
    ctx->pc = 0x142e08u;
    // NOP
    // 0x142e0c: 0x0  nop
    ctx->pc = 0x142e0cu;
    // NOP
    // 0x142e10: 0x46140043  div.s       $f1, $f0, $f20
    ctx->pc = 0x142e10u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x142e14: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x142e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x142e18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142e18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142e1c: 0x0  nop
    ctx->pc = 0x142e1cu;
    // NOP
    // 0x142e20: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x142e20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x142e24: 0xe7808880  swc1        $f0, -0x7780($gp)
    ctx->pc = 0x142e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936704), bits); }
label_142e28:
    // 0x142e28: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x142e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x142e2c: 0x8f838870  lw          $v1, -0x7790($gp)
    ctx->pc = 0x142e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936688)));
    // 0x142e30: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x142e30u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x142e34: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x142e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x142e38: 0xaf828870  sw          $v0, -0x7790($gp)
    ctx->pc = 0x142e38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936688), GPR_U32(ctx, 2));
    // 0x142e3c: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x142E3Cu;
    {
        const bool branch_taken_0x142e3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x142E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142E3Cu;
            // 0x142e40: 0x8f838870  lw          $v1, -0x7790($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e3c) {
            ctx->pc = 0x142E48u;
            goto label_142e48;
        }
    }
    ctx->pc = 0x142E44u;
    // 0x142e44: 0x1cd  break       0, 7
    ctx->pc = 0x142e44u;
    runtime->handleBreak(rdram, ctx);
label_142e48:
    // 0x142e48: 0x1012  mflo        $v0
    ctx->pc = 0x142e48u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x142e4c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x142e4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x142e50: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x142E50u;
    {
        const bool branch_taken_0x142e50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x142E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142E50u;
            // 0x142e54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e50) {
            ctx->pc = 0x142E5Cu;
            goto label_142e5c;
        }
    }
    ctx->pc = 0x142E58u;
    // 0x142e58: 0xaf808870  sw          $zero, -0x7790($gp)
    ctx->pc = 0x142e58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936688), GPR_U32(ctx, 0));
label_142e5c:
    // 0x142e5c: 0xc050ba8  jal         func_142EA0
    ctx->pc = 0x142E5Cu;
    SET_GPR_U32(ctx, 31, 0x142E64u);
    ctx->pc = 0x142EA0u;
    if (runtime->hasFunction(0x142EA0u)) {
        auto targetFn = runtime->lookupFunction(0x142EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142E64u; }
        if (ctx->pc != 0x142E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSendPacket__FP14mgCDrawManager_0x142ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142E64u; }
        if (ctx->pc != 0x142E64u) { return; }
    }
    ctx->pc = 0x142E64u;
label_142e64:
    // 0x142e64: 0x8f838818  lw          $v1, -0x77E8($gp)
    ctx->pc = 0x142e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x142e68: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x142e68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x142e6c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x142e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x142e70: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x142e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x142e74: 0xaf838818  sw          $v1, -0x77E8($gp)
    ctx->pc = 0x142e74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936600), GPR_U32(ctx, 3));
    // 0x142e78: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x142e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x142e7c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x142e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x142e80: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x142e80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x142e84: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x142e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x142e88: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x142e88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x142e8c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x142e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x142e90: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x142e90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x142e94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x142e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142e98: 0x3e00008  jr          $ra
    ctx->pc = 0x142E98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142E98u;
            // 0x142e9c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x142EA0u;
}
