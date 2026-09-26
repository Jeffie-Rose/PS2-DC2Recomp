#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcWindowOutRectFromInRect__Fi4RECTP4RECT
// Address: 0x15b140 - 0x15b1f4
void CalcWindowOutRectFromInRect__Fi4RECTP4RECT_0x15b140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcWindowOutRectFromInRect__Fi4RECTP4RECT_0x15b140");
#endif

    ctx->pc = 0x15b140u;

    // 0x15b140: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x15b140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15b144: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15b144u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15b148: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x15b148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15b14c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15b14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x15b150: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x15b150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b154: 0x27a70000  addiu       $a3, $sp, 0x0
    ctx->pc = 0x15b154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x15b158: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x15b158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b15c: 0x44100  sll         $t0, $a0, 4
    ctx->pc = 0x15b15cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x15b160: 0x24634690  addiu       $v1, $v1, 0x4690
    ctx->pc = 0x15b160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18064));
    // 0x15b164: 0x684821  addu        $t1, $v1, $t0
    ctx->pc = 0x15b164u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x15b168: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15b168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x15b16c: 0x24634694  addiu       $v1, $v1, 0x4694
    ctx->pc = 0x15b16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18068));
    // 0x15b170: 0x685021  addu        $t2, $v1, $t0
    ctx->pc = 0x15b170u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x15b174: 0xe4e30000  swc1        $f3, 0x0($a3)
    ctx->pc = 0x15b174u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x15b178: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15b178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x15b17c: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x15b17cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x15b180: 0x24634698  addiu       $v1, $v1, 0x4698
    ctx->pc = 0x15b180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18072));
    // 0x15b184: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x15b184u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x15b188: 0x682021  addu        $a0, $v1, $t0
    ctx->pc = 0x15b188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x15b18c: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x15b18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x15b190: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15b190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x15b194: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x15b194u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x15b198: 0x2463469c  addiu       $v1, $v1, 0x469C
    ctx->pc = 0x15b198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18076));
    // 0x15b19c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x15b19cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b1a0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x15b1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x15b1a4: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x15b1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x15b1a8: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x15b1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x15b1ac: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x15b1acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x15b1b0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x15b1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15b1b4: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x15b1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x15b1b8: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x15b1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x15b1bc: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x15b1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x15b1c0: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x15b1c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15b1c4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x15b1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15b1c8: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x15b1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x15b1cc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15b1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15b1d0: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x15b1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x15b1d4: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x15b1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x15b1d8: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x15b1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x15b1dc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15b1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15b1e0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15b1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15b1e4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15b1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15b1e8: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x15b1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x15b1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x15B1ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B1ECu;
            // 0x15b1f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15B1F4u;
}
