#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: videoDecFlush__6CMovieFP8VideoDec
// Address: 0x2991d0 - 0x299298
void videoDecFlush__6CMovieFP8VideoDec_0x2991d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("videoDecFlush__6CMovieFP8VideoDec_0x2991d0");
#endif

    switch (ctx->pc) {
        case 0x2991f8u: goto label_2991f8;
        case 0x299258u: goto label_299258;
        case 0x299268u: goto label_299268;
        case 0x299270u: goto label_299270;
        default: break;
    }

    ctx->pc = 0x2991d0u;

    // 0x2991d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2991d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2991d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2991d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2991d8: 0x27a60034  addiu       $a2, $sp, 0x34
    ctx->pc = 0x2991d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x2991dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2991dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2991e0: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2991e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2991e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2991e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2991e8: 0x27a80038  addiu       $t0, $sp, 0x38
    ctx->pc = 0x2991e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2991ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2991ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2991f0: 0xc0a6f2c  jal         func_29BCB0
    ctx->pc = 0x2991F0u;
    SET_GPR_U32(ctx, 31, 0x2991F8u);
    ctx->pc = 0x2991F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2991F0u;
            // 0x2991f4: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29BCB0u;
    if (runtime->hasFunction(0x29BCB0u)) {
        auto targetFn = runtime->lookupFunction(0x29BCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2991F8u; }
        if (ctx->pc != 0x2991F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecBeginPut__FP8VideoDecPPUcPiPPUcPi_0x29bcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2991F8u; }
        if (ctx->pc != 0x2991F8u) { return; }
    }
    ctx->pc = 0x2991F8u;
label_2991f8:
    // 0x2991f8: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x2991f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2991fc: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x2991fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x299200: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x299200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x299204: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x299204u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x299208: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x299208u;
    {
        const bool branch_taken_0x299208 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29920Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299208u;
            // 0x29920c: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299208) {
            ctx->pc = 0x299218u;
            goto label_299218;
        }
    }
    ctx->pc = 0x299210u;
    // 0x299210: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x299210u;
    {
        const bool branch_taken_0x299210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299210u;
            // 0x299214: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299210) {
            ctx->pc = 0x299288u;
            goto label_299288;
        }
    }
    ctx->pc = 0x299218u;
label_299218:
    // 0x299218: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x299218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x29921c: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x29921cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x299220: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x299220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x299224: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x299224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299228: 0xc7808458  lwc1        $f0, -0x7BA8($gp)
    ctx->pc = 0x299228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29922c: 0x27a8003c  addiu       $t0, $sp, 0x3C
    ctx->pc = 0x29922cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x299230: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x299230u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x299234: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x299234u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299238: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x299238u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29923c: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x29923cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x299240: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x299240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x299244: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x299244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x299248: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x299248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x29924c: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x29924cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x299250: 0xc0a6f44  jal         func_29BD10
    ctx->pc = 0x299250u;
    SET_GPR_U32(ctx, 31, 0x299258u);
    ctx->pc = 0x299254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299250u;
            // 0x299254: 0xe5000000  swc1        $f0, 0x0($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29BD10u;
    if (runtime->hasFunction(0x29BD10u)) {
        auto targetFn = runtime->lookupFunction(0x29BD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299258u; }
        if (ctx->pc != 0x299258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cpy2area__FPUciPUciPUciPUci_0x29bd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299258u; }
        if (ctx->pc != 0x299258u) { return; }
    }
    ctx->pc = 0x299258u;
label_299258:
    // 0x299258: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x299258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x29925c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29925cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299260: 0xc0a6f40  jal         func_29BD00
    ctx->pc = 0x299260u;
    SET_GPR_U32(ctx, 31, 0x299268u);
    ctx->pc = 0x299264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299260u;
            // 0x299264: 0x24845350  addiu       $a0, $a0, 0x5350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29BD00u;
    if (runtime->hasFunction(0x29BD00u)) {
        auto targetFn = runtime->lookupFunction(0x29BD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299268u; }
        if (ctx->pc != 0x299268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecEndPut__FP8VideoDeci_0x29bd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299268u; }
        if (ctx->pc != 0x299268u) { return; }
    }
    ctx->pc = 0x299268u;
label_299268:
    // 0x299268: 0xc0a69a0  jal         func_29A680
    ctx->pc = 0x299268u;
    SET_GPR_U32(ctx, 31, 0x299270u);
    ctx->pc = 0x29926Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299268u;
            // 0x29926c: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A680u;
    if (runtime->hasFunction(0x29A680u)) {
        auto targetFn = runtime->lookupFunction(0x29A680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299270u; }
        if (ctx->pc != 0x299270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        viBufFlush__FP5ViBuf_0x29a680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299270u; }
        if (ctx->pc != 0x299270u) { return; }
    }
    ctx->pc = 0x299270u;
label_299270:
    // 0x299270: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x299270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x299274: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x299274u;
    {
        const bool branch_taken_0x299274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x299278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299274u;
            // 0x299278: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299274) {
            ctx->pc = 0x299288u;
            goto label_299288;
        }
    }
    ctx->pc = 0x29927Cu;
    // 0x29927c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29927cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x299280: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x299280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    // 0x299284: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x299284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_299288:
    // 0x299288: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x299288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29928c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29928cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299290: 0x3e00008  jr          $ra
    ctx->pc = 0x299290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299290u;
            // 0x299294: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x299298u;
}
