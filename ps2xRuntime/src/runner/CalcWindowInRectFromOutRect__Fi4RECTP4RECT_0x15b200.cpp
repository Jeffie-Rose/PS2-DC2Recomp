#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcWindowInRectFromOutRect__Fi4RECTP4RECT
// Address: 0x15b200 - 0x15b2b4
void CalcWindowInRectFromOutRect__Fi4RECTP4RECT_0x15b200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcWindowInRectFromOutRect__Fi4RECTP4RECT_0x15b200");
#endif

    ctx->pc = 0x15b200u;

    // 0x15b200: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x15b200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15b204: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15b204u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15b208: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x15b208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15b20c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15b20cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x15b210: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x15b210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b214: 0x27a70000  addiu       $a3, $sp, 0x0
    ctx->pc = 0x15b214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x15b218: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x15b218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b21c: 0x44100  sll         $t0, $a0, 4
    ctx->pc = 0x15b21cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x15b220: 0x24634690  addiu       $v1, $v1, 0x4690
    ctx->pc = 0x15b220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18064));
    // 0x15b224: 0x684821  addu        $t1, $v1, $t0
    ctx->pc = 0x15b224u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x15b228: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15b228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x15b22c: 0x24634694  addiu       $v1, $v1, 0x4694
    ctx->pc = 0x15b22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18068));
    // 0x15b230: 0x685021  addu        $t2, $v1, $t0
    ctx->pc = 0x15b230u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x15b234: 0xe4e30000  swc1        $f3, 0x0($a3)
    ctx->pc = 0x15b234u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x15b238: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15b238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x15b23c: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x15b23cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x15b240: 0x24634698  addiu       $v1, $v1, 0x4698
    ctx->pc = 0x15b240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18072));
    // 0x15b244: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x15b244u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x15b248: 0x682021  addu        $a0, $v1, $t0
    ctx->pc = 0x15b248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x15b24c: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x15b24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x15b250: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15b250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x15b254: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x15b254u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b258: 0x2463469c  addiu       $v1, $v1, 0x469C
    ctx->pc = 0x15b258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18076));
    // 0x15b25c: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x15b25cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x15b260: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x15b260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x15b264: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x15b264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x15b268: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x15b268u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x15b26c: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x15b26cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15b270: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x15b270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x15b274: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x15b274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x15b278: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x15b278u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x15b27c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x15b27cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15b280: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x15b280u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x15b284: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x15b284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15b288: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x15b288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x15b28c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x15b28cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15b290: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x15b290u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x15b294: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x15b294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15b298: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x15b298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x15b29c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x15b29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x15b2a0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15b2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15b2a4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x15b2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15b2a8: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x15b2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x15b2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x15B2ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B2ACu;
            // 0x15b2b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15B2B4u;
}
