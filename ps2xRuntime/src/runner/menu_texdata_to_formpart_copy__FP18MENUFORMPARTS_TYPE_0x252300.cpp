#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: menu_texdata_to_formpart_copy__FP18MENUFORMPARTS_TYPE
// Address: 0x252300 - 0x252350
void menu_texdata_to_formpart_copy__FP18MENUFORMPARTS_TYPE_0x252300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("menu_texdata_to_formpart_copy__FP18MENUFORMPARTS_TYPE_0x252300");
#endif

    switch (ctx->pc) {
        case 0x25231cu: goto label_25231c;
        default: break;
    }

    ctx->pc = 0x252300u;

    // 0x252300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x252300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x252304: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x252304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x252308: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x252308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25230c: 0x90850018  lbu         $a1, 0x18($a0)
    ctx->pc = 0x25230cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x252310: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x252310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252314: 0xc08a9d4  jal         func_22A750
    ctx->pc = 0x252314u;
    SET_GPR_U32(ctx, 31, 0x25231Cu);
    ctx->pc = 0x252318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252314u;
            // 0x252318: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A750u;
    if (runtime->hasFunction(0x22A750u)) {
        auto targetFn = runtime->lookupFunction(0x22A750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25231Cu; }
        if (ctx->pc != 0x25231Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexGetInfo__14CPosDataManageFi_0x22a750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25231Cu; }
        if (ctx->pc != 0x25231Cu) { return; }
    }
    ctx->pc = 0x25231Cu;
label_25231c:
    // 0x25231c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x25231cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x252320: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x252320u;
    {
        const bool branch_taken_0x252320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252320u;
            // 0x252324: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252320) {
            ctx->pc = 0x252340u;
            goto label_252340;
        }
    }
    ctx->pc = 0x252328u;
    // 0x252328: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x252328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25232c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25232cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x252330: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x252330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x252334: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x252334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252338: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x252338u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25233c: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x25233cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_252340:
    // 0x252340: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x252340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252344: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x252344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252348: 0x3e00008  jr          $ra
    ctx->pc = 0x252348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25234Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252348u;
            // 0x25234c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x252350u;
}
