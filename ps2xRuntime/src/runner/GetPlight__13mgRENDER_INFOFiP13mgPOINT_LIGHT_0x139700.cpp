#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPlight__13mgRENDER_INFOFiP13mgPOINT_LIGHT
// Address: 0x139700 - 0x1397b4
void GetPlight__13mgRENDER_INFOFiP13mgPOINT_LIGHT_0x139700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPlight__13mgRENDER_INFOFiP13mgPOINT_LIGHT_0x139700");
#endif

    switch (ctx->pc) {
        case 0x139740u: goto label_139740;
        default: break;
    }

    ctx->pc = 0x139700u;

    // 0x139700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x139700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x139704: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x139704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x139708: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x139708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13970c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13970cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x139710: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x139710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139714: 0x6200022  bltz        $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x139714u;
    {
        const bool branch_taken_0x139714 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x139718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139714u;
            // 0x139718: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139714) {
            ctx->pc = 0x1397A0u;
            goto label_1397a0;
        }
    }
    ctx->pc = 0x13971Cu;
    // 0x13971c: 0x2a210004  slti        $at, $s1, 0x4
    ctx->pc = 0x13971cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x139720: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x139720u;
    {
        const bool branch_taken_0x139720 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x139720) {
            ctx->pc = 0x1397A0u;
            goto label_1397a0;
        }
    }
    ctx->pc = 0x139728u;
    // 0x139728: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x139728u;
    {
        const bool branch_taken_0x139728 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x139728) {
            ctx->pc = 0x139738u;
            goto label_139738;
        }
    }
    ctx->pc = 0x139730u;
    // 0x139730: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x139730u;
    {
        const bool branch_taken_0x139730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139730u;
            // 0x139734: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139730) {
            ctx->pc = 0x1397A4u;
            goto label_1397a4;
        }
    }
    ctx->pc = 0x139738u;
label_139738:
    // 0x139738: 0xc04e494  jal         func_139250
    ctx->pc = 0x139738u;
    SET_GPR_U32(ctx, 31, 0x139740u);
    ctx->pc = 0x139250u;
    if (runtime->hasFunction(0x139250u)) {
        auto targetFn = runtime->lookupFunction(0x139250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139740u; }
        if (ctx->pc != 0x139740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetpLightInfo__13mgRENDER_INFOFv_0x139250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139740u; }
        if (ctx->pc != 0x139740u) { return; }
    }
    ctx->pc = 0x139740u;
label_139740:
    // 0x139740: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x139740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x139744: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x139744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x139748: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x139748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13974c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13974cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x139750: 0xc4630090  lwc1        $f3, 0x90($v1)
    ctx->pc = 0x139750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x139754: 0xc4620094  lwc1        $f2, 0x94($v1)
    ctx->pc = 0x139754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x139758: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x139758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13975c: 0xc460009c  lwc1        $f0, 0x9C($v1)
    ctx->pc = 0x13975cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139760: 0xe6030000  swc1        $f3, 0x0($s0)
    ctx->pc = 0x139760u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x139764: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x139764u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x139768: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x139768u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x13976c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x13976cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x139770: 0xc46300a0  lwc1        $f3, 0xA0($v1)
    ctx->pc = 0x139770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x139774: 0xc46200a4  lwc1        $f2, 0xA4($v1)
    ctx->pc = 0x139774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x139778: 0xc46100a8  lwc1        $f1, 0xA8($v1)
    ctx->pc = 0x139778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13977c: 0xc46000ac  lwc1        $f0, 0xAC($v1)
    ctx->pc = 0x13977cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139780: 0xe6030010  swc1        $f3, 0x10($s0)
    ctx->pc = 0x139780u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x139784: 0xe6020014  swc1        $f2, 0x14($s0)
    ctx->pc = 0x139784u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x139788: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x139788u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x13978c: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x13978cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x139790: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x139790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139794: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x139794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x139798: 0xc46000b4  lwc1        $f0, 0xB4($v1)
    ctx->pc = 0x139798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13979c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x13979cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_1397a0:
    // 0x1397a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1397a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1397a4:
    // 0x1397a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1397a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1397a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1397a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1397ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1397ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1397B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1397ACu;
            // 0x1397b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1397B4u;
}
