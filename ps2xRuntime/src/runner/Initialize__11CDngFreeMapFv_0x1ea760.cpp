#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__11CDngFreeMapFv
// Address: 0x1ea760 - 0x1ea824
void Initialize__11CDngFreeMapFv_0x1ea760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__11CDngFreeMapFv_0x1ea760");
#endif

    switch (ctx->pc) {
        case 0x1ea7b4u: goto label_1ea7b4;
        case 0x1ea7e8u: goto label_1ea7e8;
        default: break;
    }

    ctx->pc = 0x1ea760u;

    // 0x1ea760: 0x3c02430a  lui         $v0, 0x430A
    ctx->pc = 0x1ea760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17162 << 16));
    // 0x1ea764: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ea764u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ea768: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ea768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ea76c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ea76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ea770: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ea770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ea774: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ea774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea778: 0x3c02438f  lui         $v0, 0x438F
    ctx->pc = 0x1ea778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17295 << 16));
    // 0x1ea77c: 0xa0830008  sb          $v1, 0x8($a0)
    ctx->pc = 0x1ea77cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ea780: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1ea780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1ea784: 0xa0800009  sb          $zero, 0x9($a0)
    ctx->pc = 0x1ea784u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ea788: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x1ea788u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ea78c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ea78cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea790: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1ea790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x1ea794: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1ea794u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1ea798: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ea798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ea79c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1ea79cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1ea7a0: 0xa480000c  sh          $zero, 0xC($a0)
    ctx->pc = 0x1ea7a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ea7a4: 0x3c0243d2  lui         $v0, 0x43D2
    ctx->pc = 0x1ea7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17362 << 16));
    // 0x1ea7a8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1ea7a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ea7ac: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x1EA7ACu;
    SET_GPR_U32(ctx, 31, 0x1EA7B4u);
    ctx->pc = 0x1EA7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA7ACu;
            // 0x1ea7b0: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA7B4u; }
        if (ctx->pc != 0x1EA7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA7B4u; }
        if (ctx->pc != 0x1EA7B4u) { return; }
    }
    ctx->pc = 0x1EA7B4u;
label_1ea7b4:
    // 0x1ea7b4: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1ea7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1ea7b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ea7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ea7bc: 0xa60300c2  sh          $v1, 0xC2($s0)
    ctx->pc = 0x1ea7bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ea7c0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1ea7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1ea7c4: 0xa60300c0  sh          $v1, 0xC0($s0)
    ctx->pc = 0x1ea7c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ea7c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ea7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea7cc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1ea7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1ea7d0: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x1ea7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x1ea7d4: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x1ea7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x1ea7d8: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1ea7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1ea7dc: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1ea7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
    // 0x1ea7e0: 0xc07aa0c  jal         func_1EA830
    ctx->pc = 0x1EA7E0u;
    SET_GPR_U32(ctx, 31, 0x1EA7E8u);
    ctx->pc = 0x1EA7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA7E0u;
            // 0x1ea7e4: 0xae0000cc  sw          $zero, 0xCC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA830u;
    if (runtime->hasFunction(0x1EA830u)) {
        auto targetFn = runtime->lookupFunction(0x1EA830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA7E8u; }
        if (ctx->pc != 0x1EA7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitTexture__11CDngFreeMapFv_0x1ea830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA7E8u; }
        if (ctx->pc != 0x1EA7E8u) { return; }
    }
    ctx->pc = 0x1EA7E8u;
label_1ea7e8:
    // 0x1ea7e8: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x1ea7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
    // 0x1ea7ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ea7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ea7f0: 0xae0400f0  sw          $a0, 0xF0($s0)
    ctx->pc = 0x1ea7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 4));
    // 0x1ea7f4: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x1ea7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x1ea7f8: 0xa60000c8  sh          $zero, 0xC8($s0)
    ctx->pc = 0x1ea7f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 200), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ea7fc: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1ea7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1ea800: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1ea800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1ea804: 0xa60000ec  sh          $zero, 0xEC($s0)
    ctx->pc = 0x1ea804u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 236), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ea808: 0xae0300fc  sw          $v1, 0xFC($s0)
    ctx->pc = 0x1ea808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 3));
    // 0x1ea80c: 0xae0300f4  sw          $v1, 0xF4($s0)
    ctx->pc = 0x1ea80cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 3));
    // 0x1ea810: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x1ea810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
    // 0x1ea814: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ea814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea818: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ea818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea81c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA81Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA81Cu;
            // 0x1ea820: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EA824u;
}
