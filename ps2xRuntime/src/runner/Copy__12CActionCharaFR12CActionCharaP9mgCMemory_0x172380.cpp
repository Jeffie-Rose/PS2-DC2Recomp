#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Copy__12CActionCharaFR12CActionCharaP9mgCMemory
// Address: 0x172380 - 0x1727f4
void Copy__12CActionCharaFR12CActionCharaP9mgCMemory_0x172380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Copy__12CActionCharaFR12CActionCharaP9mgCMemory_0x172380");
#endif

    switch (ctx->pc) {
        case 0x1723acu: goto label_1723ac;
        case 0x1723f0u: goto label_1723f0;
        case 0x17247cu: goto label_17247c;
        case 0x172508u: goto label_172508;
        case 0x17262cu: goto label_17262c;
        case 0x172660u: goto label_172660;
        case 0x17268cu: goto label_17268c;
        case 0x172710u: goto label_172710;
        case 0x17273cu: goto label_17273c;
        case 0x1727a8u: goto label_1727a8;
        case 0x1727dcu: goto label_1727dc;
        default: break;
    }

    ctx->pc = 0x172380u;

    // 0x172380: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x172380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x172384: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x172384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x172388: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x172388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17238c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17238cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x172390: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x172390u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172394: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x172394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172398: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x172398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17239c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x17239cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1723a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1723a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1723a4: 0xc05ca00  jal         func_172800
    ctx->pc = 0x1723A4u;
    SET_GPR_U32(ctx, 31, 0x1723ACu);
    ctx->pc = 0x1723A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1723A4u;
            // 0x1723a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172800u;
    if (runtime->hasFunction(0x172800u)) {
        auto targetFn = runtime->lookupFunction(0x172800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1723ACu; }
        if (ctx->pc != 0x1723ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__11CCharacter2FRC11CCharacter2_0x172800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1723ACu; }
        if (ctx->pc != 0x1723ACu) { return; }
    }
    ctx->pc = 0x1723ACu;
label_1723ac:
    // 0x1723ac: 0xc6430660  lwc1        $f3, 0x660($s2)
    ctx->pc = 0x1723acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1723b0: 0x2646067c  addiu       $a2, $s2, 0x67C
    ctx->pc = 0x1723b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1660));
    // 0x1723b4: 0xc6420664  lwc1        $f2, 0x664($s2)
    ctx->pc = 0x1723b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1723b8: 0x2625067c  addiu       $a1, $s1, 0x67C
    ctx->pc = 0x1723b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1660));
    // 0x1723bc: 0xc6410668  lwc1        $f1, 0x668($s2)
    ctx->pc = 0x1723bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1723c0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1723c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1723c4: 0xc640066c  lwc1        $f0, 0x66C($s2)
    ctx->pc = 0x1723c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1723c8: 0xe6230660  swc1        $f3, 0x660($s1)
    ctx->pc = 0x1723c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1632), bits); }
    // 0x1723cc: 0xe6220664  swc1        $f2, 0x664($s1)
    ctx->pc = 0x1723ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1636), bits); }
    // 0x1723d0: 0xe6210668  swc1        $f1, 0x668($s1)
    ctx->pc = 0x1723d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1640), bits); }
    // 0x1723d4: 0xe620066c  swc1        $f0, 0x66C($s1)
    ctx->pc = 0x1723d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1644), bits); }
    // 0x1723d8: 0x8e430670  lw          $v1, 0x670($s2)
    ctx->pc = 0x1723d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
    // 0x1723dc: 0xae230670  sw          $v1, 0x670($s1)
    ctx->pc = 0x1723dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 3));
    // 0x1723e0: 0x8e430674  lw          $v1, 0x674($s2)
    ctx->pc = 0x1723e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1652)));
    // 0x1723e4: 0xae230674  sw          $v1, 0x674($s1)
    ctx->pc = 0x1723e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 3));
    // 0x1723e8: 0x8e430678  lw          $v1, 0x678($s2)
    ctx->pc = 0x1723e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1656)));
    // 0x1723ec: 0xae230678  sw          $v1, 0x678($s1)
    ctx->pc = 0x1723ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1656), GPR_U32(ctx, 3));
label_1723f0:
    // 0x1723f0: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x1723f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1723f4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1723f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1723f8: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x1723f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1723fc: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x1723fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x172400: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x172400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x172404: 0x0  nop
    ctx->pc = 0x172404u;
    // NOP
    // 0x172408: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x172408u;
    {
        const bool branch_taken_0x172408 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x172408) {
            ctx->pc = 0x1723F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1723f0;
        }
    }
    ctx->pc = 0x172410u;
    // 0x172410: 0x8643068a  lh          $v1, 0x68A($s2)
    ctx->pc = 0x172410u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1674)));
    // 0x172414: 0x264606bc  addiu       $a2, $s2, 0x6BC
    ctx->pc = 0x172414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1724));
    // 0x172418: 0x262506bc  addiu       $a1, $s1, 0x6BC
    ctx->pc = 0x172418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1724));
    // 0x17241c: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x17241cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x172420: 0xa623068a  sh          $v1, 0x68A($s1)
    ctx->pc = 0x172420u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1674), (uint16_t)GPR_U32(ctx, 3));
    // 0x172424: 0xc6430690  lwc1        $f3, 0x690($s2)
    ctx->pc = 0x172424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x172428: 0xc6420694  lwc1        $f2, 0x694($s2)
    ctx->pc = 0x172428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17242c: 0xc6410698  lwc1        $f1, 0x698($s2)
    ctx->pc = 0x17242cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172430: 0xc640069c  lwc1        $f0, 0x69C($s2)
    ctx->pc = 0x172430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172434: 0xe6230690  swc1        $f3, 0x690($s1)
    ctx->pc = 0x172434u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1680), bits); }
    // 0x172438: 0xe6220694  swc1        $f2, 0x694($s1)
    ctx->pc = 0x172438u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1684), bits); }
    // 0x17243c: 0xe6210698  swc1        $f1, 0x698($s1)
    ctx->pc = 0x17243cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1688), bits); }
    // 0x172440: 0xe620069c  swc1        $f0, 0x69C($s1)
    ctx->pc = 0x172440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1692), bits); }
    // 0x172444: 0x8e4306a0  lw          $v1, 0x6A0($s2)
    ctx->pc = 0x172444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1696)));
    // 0x172448: 0xae2306a0  sw          $v1, 0x6A0($s1)
    ctx->pc = 0x172448u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1696), GPR_U32(ctx, 3));
    // 0x17244c: 0x8e4306a4  lw          $v1, 0x6A4($s2)
    ctx->pc = 0x17244cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1700)));
    // 0x172450: 0xae2306a4  sw          $v1, 0x6A4($s1)
    ctx->pc = 0x172450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1700), GPR_U32(ctx, 3));
    // 0x172454: 0x8e4306a8  lw          $v1, 0x6A8($s2)
    ctx->pc = 0x172454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1704)));
    // 0x172458: 0xae2306a8  sw          $v1, 0x6A8($s1)
    ctx->pc = 0x172458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1704), GPR_U32(ctx, 3));
    // 0x17245c: 0xc64006ac  lwc1        $f0, 0x6AC($s2)
    ctx->pc = 0x17245cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172460: 0xe62006ac  swc1        $f0, 0x6AC($s1)
    ctx->pc = 0x172460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1708), bits); }
    // 0x172464: 0x8e4306b0  lw          $v1, 0x6B0($s2)
    ctx->pc = 0x172464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1712)));
    // 0x172468: 0xae2306b0  sw          $v1, 0x6B0($s1)
    ctx->pc = 0x172468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1712), GPR_U32(ctx, 3));
    // 0x17246c: 0x864306b4  lh          $v1, 0x6B4($s2)
    ctx->pc = 0x17246cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1716)));
    // 0x172470: 0xa62306b4  sh          $v1, 0x6B4($s1)
    ctx->pc = 0x172470u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1716), (uint16_t)GPR_U32(ctx, 3));
    // 0x172474: 0x8e4306b8  lw          $v1, 0x6B8($s2)
    ctx->pc = 0x172474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1720)));
    // 0x172478: 0xae2306b8  sw          $v1, 0x6B8($s1)
    ctx->pc = 0x172478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1720), GPR_U32(ctx, 3));
label_17247c:
    // 0x17247c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x17247cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x172480: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x172480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x172484: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x172484u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x172488: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x172488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x17248c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x17248cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x172490: 0x0  nop
    ctx->pc = 0x172490u;
    // NOP
    // 0x172494: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x172494u;
    {
        const bool branch_taken_0x172494 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x172494) {
            ctx->pc = 0x17247Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17247c;
        }
    }
    ctx->pc = 0x17249Cu;
    // 0x17249c: 0x86430710  lh          $v1, 0x710($s2)
    ctx->pc = 0x17249cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1808)));
    // 0x1724a0: 0x26460734  addiu       $a2, $s2, 0x734
    ctx->pc = 0x1724a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1844));
    // 0x1724a4: 0x26250734  addiu       $a1, $s1, 0x734
    ctx->pc = 0x1724a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1844));
    // 0x1724a8: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1724a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1724ac: 0xa6230710  sh          $v1, 0x710($s1)
    ctx->pc = 0x1724acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1808), (uint16_t)GPR_U32(ctx, 3));
    // 0x1724b0: 0x86430712  lh          $v1, 0x712($s2)
    ctx->pc = 0x1724b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1810)));
    // 0x1724b4: 0xa6230712  sh          $v1, 0x712($s1)
    ctx->pc = 0x1724b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1810), (uint16_t)GPR_U32(ctx, 3));
    // 0x1724b8: 0x8e430714  lw          $v1, 0x714($s2)
    ctx->pc = 0x1724b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1812)));
    // 0x1724bc: 0xae230714  sw          $v1, 0x714($s1)
    ctx->pc = 0x1724bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1812), GPR_U32(ctx, 3));
    // 0x1724c0: 0x8e430718  lw          $v1, 0x718($s2)
    ctx->pc = 0x1724c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1816)));
    // 0x1724c4: 0xae230718  sw          $v1, 0x718($s1)
    ctx->pc = 0x1724c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1816), GPR_U32(ctx, 3));
    // 0x1724c8: 0x8643071c  lh          $v1, 0x71C($s2)
    ctx->pc = 0x1724c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1820)));
    // 0x1724cc: 0xa623071c  sh          $v1, 0x71C($s1)
    ctx->pc = 0x1724ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1820), (uint16_t)GPR_U32(ctx, 3));
    // 0x1724d0: 0x8e430720  lw          $v1, 0x720($s2)
    ctx->pc = 0x1724d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1824)));
    // 0x1724d4: 0xae230720  sw          $v1, 0x720($s1)
    ctx->pc = 0x1724d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1824), GPR_U32(ctx, 3));
    // 0x1724d8: 0x8e430724  lw          $v1, 0x724($s2)
    ctx->pc = 0x1724d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1828)));
    // 0x1724dc: 0xae230724  sw          $v1, 0x724($s1)
    ctx->pc = 0x1724dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1828), GPR_U32(ctx, 3));
    // 0x1724e0: 0x86430728  lh          $v1, 0x728($s2)
    ctx->pc = 0x1724e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1832)));
    // 0x1724e4: 0xa6230728  sh          $v1, 0x728($s1)
    ctx->pc = 0x1724e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1832), (uint16_t)GPR_U32(ctx, 3));
    // 0x1724e8: 0x8643072a  lh          $v1, 0x72A($s2)
    ctx->pc = 0x1724e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1834)));
    // 0x1724ec: 0xa623072a  sh          $v1, 0x72A($s1)
    ctx->pc = 0x1724ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1834), (uint16_t)GPR_U32(ctx, 3));
    // 0x1724f0: 0x8e43072c  lw          $v1, 0x72C($s2)
    ctx->pc = 0x1724f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1836)));
    // 0x1724f4: 0xae23072c  sw          $v1, 0x72C($s1)
    ctx->pc = 0x1724f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1836), GPR_U32(ctx, 3));
    // 0x1724f8: 0x86430730  lh          $v1, 0x730($s2)
    ctx->pc = 0x1724f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1840)));
    // 0x1724fc: 0xa6230730  sh          $v1, 0x730($s1)
    ctx->pc = 0x1724fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1840), (uint16_t)GPR_U32(ctx, 3));
    // 0x172500: 0x86430732  lh          $v1, 0x732($s2)
    ctx->pc = 0x172500u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1842)));
    // 0x172504: 0xa6230732  sh          $v1, 0x732($s1)
    ctx->pc = 0x172504u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1842), (uint16_t)GPR_U32(ctx, 3));
label_172508:
    // 0x172508: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x172508u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17250c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x17250cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x172510: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x172510u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x172514: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x172514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x172518: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x172518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x17251c: 0x0  nop
    ctx->pc = 0x17251cu;
    // NOP
    // 0x172520: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x172520u;
    {
        const bool branch_taken_0x172520 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x172520) {
            ctx->pc = 0x172508u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_172508;
        }
    }
    ctx->pc = 0x172528u;
    // 0x172528: 0x8643075e  lh          $v1, 0x75E($s2)
    ctx->pc = 0x172528u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1886)));
    // 0x17252c: 0x264707e4  addiu       $a3, $s2, 0x7E4
    ctx->pc = 0x17252cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 2020));
    // 0x172530: 0x262607e4  addiu       $a2, $s1, 0x7E4
    ctx->pc = 0x172530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2020));
    // 0x172534: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x172534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x172538: 0xa623075e  sh          $v1, 0x75E($s1)
    ctx->pc = 0x172538u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1886), (uint16_t)GPR_U32(ctx, 3));
    // 0x17253c: 0xc6400760  lwc1        $f0, 0x760($s2)
    ctx->pc = 0x17253cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172540: 0xe6200760  swc1        $f0, 0x760($s1)
    ctx->pc = 0x172540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1888), bits); }
    // 0x172544: 0x86430764  lh          $v1, 0x764($s2)
    ctx->pc = 0x172544u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1892)));
    // 0x172548: 0xa6230764  sh          $v1, 0x764($s1)
    ctx->pc = 0x172548u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1892), (uint16_t)GPR_U32(ctx, 3));
    // 0x17254c: 0x8e430768  lw          $v1, 0x768($s2)
    ctx->pc = 0x17254cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1896)));
    // 0x172550: 0xae230768  sw          $v1, 0x768($s1)
    ctx->pc = 0x172550u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1896), GPR_U32(ctx, 3));
    // 0x172554: 0x8243076c  lb          $v1, 0x76C($s2)
    ctx->pc = 0x172554u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1900)));
    // 0x172558: 0xa223076c  sb          $v1, 0x76C($s1)
    ctx->pc = 0x172558u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1900), (uint8_t)GPR_U32(ctx, 3));
    // 0x17255c: 0x8243076d  lb          $v1, 0x76D($s2)
    ctx->pc = 0x17255cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1901)));
    // 0x172560: 0xa223076d  sb          $v1, 0x76D($s1)
    ctx->pc = 0x172560u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1901), (uint8_t)GPR_U32(ctx, 3));
    // 0x172564: 0x8243076e  lb          $v1, 0x76E($s2)
    ctx->pc = 0x172564u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1902)));
    // 0x172568: 0xa223076e  sb          $v1, 0x76E($s1)
    ctx->pc = 0x172568u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1902), (uint8_t)GPR_U32(ctx, 3));
    // 0x17256c: 0x86430770  lh          $v1, 0x770($s2)
    ctx->pc = 0x17256cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1904)));
    // 0x172570: 0xa6230770  sh          $v1, 0x770($s1)
    ctx->pc = 0x172570u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1904), (uint16_t)GPR_U32(ctx, 3));
    // 0x172574: 0x86430772  lh          $v1, 0x772($s2)
    ctx->pc = 0x172574u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1906)));
    // 0x172578: 0xa6230772  sh          $v1, 0x772($s1)
    ctx->pc = 0x172578u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1906), (uint16_t)GPR_U32(ctx, 3));
    // 0x17257c: 0x8e430774  lw          $v1, 0x774($s2)
    ctx->pc = 0x17257cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1908)));
    // 0x172580: 0xae230774  sw          $v1, 0x774($s1)
    ctx->pc = 0x172580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1908), GPR_U32(ctx, 3));
    // 0x172584: 0x8e430778  lw          $v1, 0x778($s2)
    ctx->pc = 0x172584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1912)));
    // 0x172588: 0xae230778  sw          $v1, 0x778($s1)
    ctx->pc = 0x172588u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1912), GPR_U32(ctx, 3));
    // 0x17258c: 0x8e43077c  lw          $v1, 0x77C($s2)
    ctx->pc = 0x17258cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1916)));
    // 0x172590: 0xae23077c  sw          $v1, 0x77C($s1)
    ctx->pc = 0x172590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1916), GPR_U32(ctx, 3));
    // 0x172594: 0x7a440780  lq          $a0, 0x780($s2)
    ctx->pc = 0x172594u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 1920)));
    // 0x172598: 0x7a430790  lq          $v1, 0x790($s2)
    ctx->pc = 0x172598u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 1936)));
    // 0x17259c: 0x7e240780  sq          $a0, 0x780($s1)
    ctx->pc = 0x17259cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1920), GPR_VEC(ctx, 4));
    // 0x1725a0: 0x7e230790  sq          $v1, 0x790($s1)
    ctx->pc = 0x1725a0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1936), GPR_VEC(ctx, 3));
    // 0x1725a4: 0xc64307a0  lwc1        $f3, 0x7A0($s2)
    ctx->pc = 0x1725a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1725a8: 0xc64207a4  lwc1        $f2, 0x7A4($s2)
    ctx->pc = 0x1725a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1725ac: 0xc64107a8  lwc1        $f1, 0x7A8($s2)
    ctx->pc = 0x1725acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1725b0: 0xc64007ac  lwc1        $f0, 0x7AC($s2)
    ctx->pc = 0x1725b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1725b4: 0xe62307a0  swc1        $f3, 0x7A0($s1)
    ctx->pc = 0x1725b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1952), bits); }
    // 0x1725b8: 0xe62207a4  swc1        $f2, 0x7A4($s1)
    ctx->pc = 0x1725b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1956), bits); }
    // 0x1725bc: 0xe62107a8  swc1        $f1, 0x7A8($s1)
    ctx->pc = 0x1725bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1960), bits); }
    // 0x1725c0: 0xe62007ac  swc1        $f0, 0x7AC($s1)
    ctx->pc = 0x1725c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1964), bits); }
    // 0x1725c4: 0xc64007b0  lwc1        $f0, 0x7B0($s2)
    ctx->pc = 0x1725c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1725c8: 0xe62007b0  swc1        $f0, 0x7B0($s1)
    ctx->pc = 0x1725c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1968), bits); }
    // 0x1725cc: 0xc64007b4  lwc1        $f0, 0x7B4($s2)
    ctx->pc = 0x1725ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1725d0: 0xe62007b4  swc1        $f0, 0x7B4($s1)
    ctx->pc = 0x1725d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1972), bits); }
    // 0x1725d4: 0x8e4307b8  lw          $v1, 0x7B8($s2)
    ctx->pc = 0x1725d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1976)));
    // 0x1725d8: 0xae2307b8  sw          $v1, 0x7B8($s1)
    ctx->pc = 0x1725d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1976), GPR_U32(ctx, 3));
    // 0x1725dc: 0xc64007bc  lwc1        $f0, 0x7BC($s2)
    ctx->pc = 0x1725dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1725e0: 0xe62007bc  swc1        $f0, 0x7BC($s1)
    ctx->pc = 0x1725e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1980), bits); }
    // 0x1725e4: 0x8e4307c0  lw          $v1, 0x7C0($s2)
    ctx->pc = 0x1725e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1984)));
    // 0x1725e8: 0xae2307c0  sw          $v1, 0x7C0($s1)
    ctx->pc = 0x1725e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1984), GPR_U32(ctx, 3));
    // 0x1725ec: 0xc64007c4  lwc1        $f0, 0x7C4($s2)
    ctx->pc = 0x1725ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1725f0: 0xe62007c4  swc1        $f0, 0x7C4($s1)
    ctx->pc = 0x1725f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1988), bits); }
    // 0x1725f4: 0x8e4307c8  lw          $v1, 0x7C8($s2)
    ctx->pc = 0x1725f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1992)));
    // 0x1725f8: 0xae2307c8  sw          $v1, 0x7C8($s1)
    ctx->pc = 0x1725f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1992), GPR_U32(ctx, 3));
    // 0x1725fc: 0x8e4307cc  lw          $v1, 0x7CC($s2)
    ctx->pc = 0x1725fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1996)));
    // 0x172600: 0xae2307cc  sw          $v1, 0x7CC($s1)
    ctx->pc = 0x172600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1996), GPR_U32(ctx, 3));
    // 0x172604: 0xc64107d0  lwc1        $f1, 0x7D0($s2)
    ctx->pc = 0x172604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172608: 0xc64007d4  lwc1        $f0, 0x7D4($s2)
    ctx->pc = 0x172608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17260c: 0xe62107d0  swc1        $f1, 0x7D0($s1)
    ctx->pc = 0x17260cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2000), bits); }
    // 0x172610: 0xe62007d4  swc1        $f0, 0x7D4($s1)
    ctx->pc = 0x172610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2004), bits); }
    // 0x172614: 0x8e4307d8  lw          $v1, 0x7D8($s2)
    ctx->pc = 0x172614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2008)));
    // 0x172618: 0xae2307d8  sw          $v1, 0x7D8($s1)
    ctx->pc = 0x172618u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2008), GPR_U32(ctx, 3));
    // 0x17261c: 0x8e4307dc  lw          $v1, 0x7DC($s2)
    ctx->pc = 0x17261cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2012)));
    // 0x172620: 0xae2307dc  sw          $v1, 0x7DC($s1)
    ctx->pc = 0x172620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2012), GPR_U32(ctx, 3));
    // 0x172624: 0x824307e0  lb          $v1, 0x7E0($s2)
    ctx->pc = 0x172624u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2016)));
    // 0x172628: 0xa22307e0  sb          $v1, 0x7E0($s1)
    ctx->pc = 0x172628u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2016), (uint8_t)GPR_U32(ctx, 3));
label_17262c:
    // 0x17262c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x17262cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x172630: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x172630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x172634: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x172634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x172638: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x172638u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x17263c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x17263cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x172640: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x172640u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x172644: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x172644u;
    {
        const bool branch_taken_0x172644 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x172648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172644u;
            // 0x172648: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172644) {
            ctx->pc = 0x17262Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17262c;
        }
    }
    ctx->pc = 0x17264Cu;
    // 0x17264c: 0x82430904  lb          $v1, 0x904($s2)
    ctx->pc = 0x17264cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2308)));
    // 0x172650: 0x26460910  addiu       $a2, $s2, 0x910
    ctx->pc = 0x172650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2320));
    // 0x172654: 0x26250910  addiu       $a1, $s1, 0x910
    ctx->pc = 0x172654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2320));
    // 0x172658: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x172658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17265c: 0xa2230904  sb          $v1, 0x904($s1)
    ctx->pc = 0x17265cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2308), (uint8_t)GPR_U32(ctx, 3));
label_172660:
    // 0x172660: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x172660u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x172664: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x172664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x172668: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x172668u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x17266c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x17266cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x172670: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x172670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x172674: 0x0  nop
    ctx->pc = 0x172674u;
    // NOP
    // 0x172678: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x172678u;
    {
        const bool branch_taken_0x172678 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x172678) {
            ctx->pc = 0x172660u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_172660;
        }
    }
    ctx->pc = 0x172680u;
    // 0x172680: 0x26470a20  addiu       $a3, $s2, 0xA20
    ctx->pc = 0x172680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 2592));
    // 0x172684: 0x26260a20  addiu       $a2, $s1, 0xA20
    ctx->pc = 0x172684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2592));
    // 0x172688: 0x24050037  addiu       $a1, $zero, 0x37
    ctx->pc = 0x172688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_17268c:
    // 0x17268c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x17268cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x172690: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x172690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x172694: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x172694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x172698: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x172698u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x17269c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x17269cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1726a0: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1726a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1726a4: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1726A4u;
    {
        const bool branch_taken_0x1726a4 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1726A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1726A4u;
            // 0x1726a8: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1726a4) {
            ctx->pc = 0x17268Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17268c;
        }
    }
    ctx->pc = 0x1726ACu;
    // 0x1726ac: 0x82430bd8  lb          $v1, 0xBD8($s2)
    ctx->pc = 0x1726acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3032)));
    // 0x1726b0: 0x26470c00  addiu       $a3, $s2, 0xC00
    ctx->pc = 0x1726b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 3072));
    // 0x1726b4: 0x26260c00  addiu       $a2, $s1, 0xC00
    ctx->pc = 0x1726b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 3072));
    // 0x1726b8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1726b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1726bc: 0xa2230bd8  sb          $v1, 0xBD8($s1)
    ctx->pc = 0x1726bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3032), (uint8_t)GPR_U32(ctx, 3));
    // 0x1726c0: 0x8e430bdc  lw          $v1, 0xBDC($s2)
    ctx->pc = 0x1726c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3036)));
    // 0x1726c4: 0xae230bdc  sw          $v1, 0xBDC($s1)
    ctx->pc = 0x1726c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3036), GPR_U32(ctx, 3));
    // 0x1726c8: 0x8e430be0  lw          $v1, 0xBE0($s2)
    ctx->pc = 0x1726c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3040)));
    // 0x1726cc: 0xae230be0  sw          $v1, 0xBE0($s1)
    ctx->pc = 0x1726ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3040), GPR_U32(ctx, 3));
    // 0x1726d0: 0x8e430be4  lw          $v1, 0xBE4($s2)
    ctx->pc = 0x1726d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3044)));
    // 0x1726d4: 0xae230be4  sw          $v1, 0xBE4($s1)
    ctx->pc = 0x1726d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3044), GPR_U32(ctx, 3));
    // 0x1726d8: 0x8e430be8  lw          $v1, 0xBE8($s2)
    ctx->pc = 0x1726d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3048)));
    // 0x1726dc: 0xae230be8  sw          $v1, 0xBE8($s1)
    ctx->pc = 0x1726dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3048), GPR_U32(ctx, 3));
    // 0x1726e0: 0x8e430bec  lw          $v1, 0xBEC($s2)
    ctx->pc = 0x1726e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3052)));
    // 0x1726e4: 0xae230bec  sw          $v1, 0xBEC($s1)
    ctx->pc = 0x1726e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3052), GPR_U32(ctx, 3));
    // 0x1726e8: 0x8e430bf0  lw          $v1, 0xBF0($s2)
    ctx->pc = 0x1726e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3056)));
    // 0x1726ec: 0xae230bf0  sw          $v1, 0xBF0($s1)
    ctx->pc = 0x1726ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3056), GPR_U32(ctx, 3));
    // 0x1726f0: 0x82430bf4  lb          $v1, 0xBF4($s2)
    ctx->pc = 0x1726f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3060)));
    // 0x1726f4: 0xa2230bf4  sb          $v1, 0xBF4($s1)
    ctx->pc = 0x1726f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3060), (uint8_t)GPR_U32(ctx, 3));
    // 0x1726f8: 0x82430bf5  lb          $v1, 0xBF5($s2)
    ctx->pc = 0x1726f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3061)));
    // 0x1726fc: 0xa2230bf5  sb          $v1, 0xBF5($s1)
    ctx->pc = 0x1726fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3061), (uint8_t)GPR_U32(ctx, 3));
    // 0x172700: 0xc6410bf8  lwc1        $f1, 0xBF8($s2)
    ctx->pc = 0x172700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172704: 0xc6400bfc  lwc1        $f0, 0xBFC($s2)
    ctx->pc = 0x172704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172708: 0xe6210bf8  swc1        $f1, 0xBF8($s1)
    ctx->pc = 0x172708u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3064), bits); }
    // 0x17270c: 0xe6200bfc  swc1        $f0, 0xBFC($s1)
    ctx->pc = 0x17270cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3068), bits); }
label_172710:
    // 0x172710: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x172710u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x172714: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x172714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x172718: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x172718u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x17271c: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x17271cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x172720: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x172720u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x172724: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x172724u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x172728: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x172728u;
    {
        const bool branch_taken_0x172728 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x17272Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172728u;
            // 0x17272c: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172728) {
            ctx->pc = 0x172710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_172710;
        }
    }
    ctx->pc = 0x172730u;
    // 0x172730: 0x26470d00  addiu       $a3, $s2, 0xD00
    ctx->pc = 0x172730u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 3328));
    // 0x172734: 0x26260d00  addiu       $a2, $s1, 0xD00
    ctx->pc = 0x172734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 3328));
    // 0x172738: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x172738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_17273c:
    // 0x17273c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x17273cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x172740: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x172740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x172744: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x172744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x172748: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x172748u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x17274c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x17274cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x172750: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x172750u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x172754: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x172754u;
    {
        const bool branch_taken_0x172754 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x172758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172754u;
            // 0x172758: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172754) {
            ctx->pc = 0x17273Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17273c;
        }
    }
    ctx->pc = 0x17275Cu;
    // 0x17275c: 0xc6430f40  lwc1        $f3, 0xF40($s2)
    ctx->pc = 0x17275cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x172760: 0x26470f60  addiu       $a3, $s2, 0xF60
    ctx->pc = 0x172760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 3936));
    // 0x172764: 0xc6420f44  lwc1        $f2, 0xF44($s2)
    ctx->pc = 0x172764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x172768: 0x26260f60  addiu       $a2, $s1, 0xF60
    ctx->pc = 0x172768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 3936));
    // 0x17276c: 0xc6410f48  lwc1        $f1, 0xF48($s2)
    ctx->pc = 0x17276cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172770: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x172770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x172774: 0xc6400f4c  lwc1        $f0, 0xF4C($s2)
    ctx->pc = 0x172774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172778: 0xe6230f40  swc1        $f3, 0xF40($s1)
    ctx->pc = 0x172778u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3904), bits); }
    // 0x17277c: 0xe6220f44  swc1        $f2, 0xF44($s1)
    ctx->pc = 0x17277cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3908), bits); }
    // 0x172780: 0xe6210f48  swc1        $f1, 0xF48($s1)
    ctx->pc = 0x172780u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3912), bits); }
    // 0x172784: 0xe6200f4c  swc1        $f0, 0xF4C($s1)
    ctx->pc = 0x172784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3916), bits); }
    // 0x172788: 0xc6400f50  lwc1        $f0, 0xF50($s2)
    ctx->pc = 0x172788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17278c: 0xe6200f50  swc1        $f0, 0xF50($s1)
    ctx->pc = 0x17278cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3920), bits); }
    // 0x172790: 0xc6400f54  lwc1        $f0, 0xF54($s2)
    ctx->pc = 0x172790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172794: 0xe6200f54  swc1        $f0, 0xF54($s1)
    ctx->pc = 0x172794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3924), bits); }
    // 0x172798: 0xc6400f58  lwc1        $f0, 0xF58($s2)
    ctx->pc = 0x172798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17279c: 0xe6200f58  swc1        $f0, 0xF58($s1)
    ctx->pc = 0x17279cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3928), bits); }
    // 0x1727a0: 0x8e430f5c  lw          $v1, 0xF5C($s2)
    ctx->pc = 0x1727a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3932)));
    // 0x1727a4: 0xae230f5c  sw          $v1, 0xF5C($s1)
    ctx->pc = 0x1727a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3932), GPR_U32(ctx, 3));
label_1727a8:
    // 0x1727a8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1727a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1727ac: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1727acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1727b0: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1727b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1727b4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1727b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1727b8: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1727b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1727bc: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1727bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1727c0: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1727C0u;
    {
        const bool branch_taken_0x1727c0 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1727C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1727C0u;
            // 0x1727c4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1727c0) {
            ctx->pc = 0x1727A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1727a8;
        }
    }
    ctx->pc = 0x1727C8u;
    // 0x1727c8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1727C8u;
    {
        const bool branch_taken_0x1727c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1727CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1727C8u;
            // 0x1727cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1727c8) {
            ctx->pc = 0x1727DCu;
            goto label_1727dc;
        }
    }
    ctx->pc = 0x1727D0u;
    // 0x1727d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1727d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1727d4: 0xc05e31c  jal         func_178C70
    ctx->pc = 0x1727D4u;
    SET_GPR_U32(ctx, 31, 0x1727DCu);
    ctx->pc = 0x1727D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1727D4u;
            // 0x1727d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178C70u;
    if (runtime->hasFunction(0x178C70u)) {
        auto targetFn = runtime->lookupFunction(0x178C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1727DCu; }
        if (ctx->pc != 0x1727DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Copy__11CCharacter2FR11CCharacter2P9mgCMemory_0x178c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1727DCu; }
        if (ctx->pc != 0x1727DCu) { return; }
    }
    ctx->pc = 0x1727DCu;
label_1727dc:
    // 0x1727dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1727dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1727e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1727e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1727e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1727e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1727e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1727e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1727ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1727ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1727F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1727ECu;
            // 0x1727f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1727F4u;
}
