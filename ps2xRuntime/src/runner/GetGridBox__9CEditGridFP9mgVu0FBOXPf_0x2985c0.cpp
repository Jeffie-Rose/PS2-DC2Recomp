#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetGridBox__9CEditGridFP9mgVu0FBOXPf
// Address: 0x2985c0 - 0x298650
void GetGridBox__9CEditGridFP9mgVu0FBOXPf_0x2985c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGridBox__9CEditGridFP9mgVu0FBOXPf_0x2985c0");
#endif

    switch (ctx->pc) {
        case 0x2985e8u: goto label_2985e8;
        case 0x2985fcu: goto label_2985fc;
        default: break;
    }

    ctx->pc = 0x2985c0u;

    // 0x2985c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2985c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2985c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2985c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2985c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2985c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2985cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2985ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2985d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2985d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2985d4: 0xc4cc0000  lwc1        $f12, 0x0($a2)
    ctx->pc = 0x2985d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2985d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2985d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2985dc: 0xc4cd0008  lwc1        $f13, 0x8($a2)
    ctx->pc = 0x2985dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2985e0: 0xc0a5e64  jal         func_297990
    ctx->pc = 0x2985E0u;
    SET_GPR_U32(ctx, 31, 0x2985E8u);
    ctx->pc = 0x2985E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2985E0u;
            // 0x2985e4: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297990u;
    if (runtime->hasFunction(0x297990u)) {
        auto targetFn = runtime->lookupFunction(0x297990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2985E8u; }
        if (ctx->pc != 0x2985E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLPos__9CEditGridFPiff_0x297990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2985E8u; }
        if (ctx->pc != 0x2985E8u) { return; }
    }
    ctx->pc = 0x2985E8u;
label_2985e8:
    // 0x2985e8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2985e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2985ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2985ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2985f0: 0x8fa7004c  lw          $a3, 0x4C($sp)
    ctx->pc = 0x2985f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2985f4: 0xc0a5e94  jal         func_297A50
    ctx->pc = 0x2985F4u;
    SET_GPR_U32(ctx, 31, 0x2985FCu);
    ctx->pc = 0x2985F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2985F4u;
            // 0x2985f8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297A50u;
    if (runtime->hasFunction(0x297A50u)) {
        auto targetFn = runtime->lookupFunction(0x297A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2985FCu; }
        if (ctx->pc != 0x2985FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWPos__9CEditGridFPfii_0x297a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2985FCu; }
        if (ctx->pc != 0x2985FCu) { return; }
    }
    ctx->pc = 0x2985FCu;
label_2985fc:
    // 0x2985fc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2985fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x298600: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x298600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x298604: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x298604u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x298608: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x298608u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x29860c: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x29860cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x298610: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x298610u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x298614: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x298614u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x298618: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x298618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x29861c: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x29861cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298620: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x298620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298624: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x298624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x298628: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x298628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x29862c: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x29862cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298630: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x298630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298634: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x298634u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x298638: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x298638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x29863c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29863cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298640: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x298640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298644: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x298644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298648: 0x3e00008  jr          $ra
    ctx->pc = 0x298648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29864Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298648u;
            // 0x29864c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x298650u;
}
