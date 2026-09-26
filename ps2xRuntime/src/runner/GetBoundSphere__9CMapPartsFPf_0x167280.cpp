#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetBoundSphere__9CMapPartsFPf
// Address: 0x167280 - 0x1672fc
void GetBoundSphere__9CMapPartsFPf_0x167280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetBoundSphere__9CMapPartsFPf_0x167280");
#endif

    switch (ctx->pc) {
        case 0x1672b4u: goto label_1672b4;
        case 0x1672d8u: goto label_1672d8;
        default: break;
    }

    ctx->pc = 0x167280u;

    // 0x167280: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x167280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x167284: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x167284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x167288: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x167288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16728c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16728cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x167290: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x167290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167294: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x167294u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x167298: 0x8c820230  lw          $v0, 0x230($a0)
    ctx->pc = 0x167298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 560)));
    // 0x16729c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16729Cu;
    {
        const bool branch_taken_0x16729c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1672A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16729Cu;
            // 0x1672a0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16729c) {
            ctx->pc = 0x1672ACu;
            goto label_1672ac;
        }
    }
    ctx->pc = 0x1672A4u;
    // 0x1672a4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1672A4u;
    {
        const bool branch_taken_0x1672a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1672A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1672A4u;
            // 0x1672a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1672a4) {
            ctx->pc = 0x1672E4u;
            goto label_1672e4;
        }
    }
    ctx->pc = 0x1672ACu;
label_1672ac:
    // 0x1672ac: 0xc059cc0  jal         func_167300
    ctx->pc = 0x1672ACu;
    SET_GPR_U32(ctx, 31, 0x1672B4u);
    ctx->pc = 0x1672B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1672ACu;
            // 0x1672b0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167300u;
    if (runtime->hasFunction(0x167300u)) {
        auto targetFn = runtime->lookupFunction(0x167300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1672B4u; }
        if (ctx->pc != 0x1672B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__9CMapPartsFPA4_f_0x167300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1672B4u; }
        if (ctx->pc != 0x1672B4u) { return; }
    }
    ctx->pc = 0x1672B4u;
label_1672b4:
    // 0x1672b4: 0x7a230260  lq          $v1, 0x260($s1)
    ctx->pc = 0x1672b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1672b8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1672b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1672bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1672bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1672c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1672c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1672c4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1672c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1672c8: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x1672c8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x1672cc: 0xc634026c  lwc1        $f20, 0x26C($s1)
    ctx->pc = 0x1672ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1672d0: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x1672D0u;
    SET_GPR_U32(ctx, 31, 0x1672D8u);
    ctx->pc = 0x1672D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1672D0u;
            // 0x1672d4: 0xafa2008c  sw          $v0, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1672D8u; }
        if (ctx->pc != 0x1672D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1672D8u; }
        if (ctx->pc != 0x1672D8u) { return; }
    }
    ctx->pc = 0x1672D8u;
label_1672d8:
    // 0x1672d8: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x1672d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1672dc: 0x8e220230  lw          $v0, 0x230($s1)
    ctx->pc = 0x1672dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x1672e0: 0x0  nop
    ctx->pc = 0x1672e0u;
    // NOP
label_1672e4:
    // 0x1672e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1672e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1672e8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1672e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1672ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1672ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1672f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1672f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1672f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1672F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1672F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1672F4u;
            // 0x1672f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1672FCu;
}
