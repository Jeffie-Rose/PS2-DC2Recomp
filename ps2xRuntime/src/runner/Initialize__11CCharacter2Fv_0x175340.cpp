#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__11CCharacter2Fv
// Address: 0x175340 - 0x17561c
void Initialize__11CCharacter2Fv_0x175340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__11CCharacter2Fv_0x175340");
#endif

    switch (ctx->pc) {
        case 0x175354u: goto label_175354;
        case 0x175388u: goto label_175388;
        case 0x175464u: goto label_175464;
        case 0x175500u: goto label_175500;
        case 0x1755a8u: goto label_1755a8;
        case 0x1755b8u: goto label_1755b8;
        case 0x17560cu: goto label_17560c;
        default: break;
    }

    ctx->pc = 0x175340u;

    // 0x175340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175344: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x175344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x175348: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x175348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17534c: 0xc05a84c  jal         func_16A130
    ctx->pc = 0x17534Cu;
    SET_GPR_U32(ctx, 31, 0x175354u);
    ctx->pc = 0x175350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17534Cu;
            // 0x175350: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A130u;
    if (runtime->hasFunction(0x16A130u)) {
        auto targetFn = runtime->lookupFunction(0x16A130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175354u; }
        if (ctx->pc != 0x175354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12CObjectFrameFv_0x16a130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175354u; }
        if (ctx->pc != 0x175354u) { return; }
    }
    ctx->pc = 0x175354u;
label_175354:
    // 0x175354: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x175354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x175358: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17535c: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x17535cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x175360: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x175360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x175364: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x175364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x175368: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x175368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    // 0x17536c: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x17536cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x175370: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x175370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x175374: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x175374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    // 0x175378: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x175378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x17537c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x17537cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x175380: 0xc04c050  jal         func_130140
    ctx->pc = 0x175380u;
    SET_GPR_U32(ctx, 31, 0x175388u);
    ctx->pc = 0x175384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175380u;
            // 0x175384: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175388u; }
        if (ctx->pc != 0x175388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175388u; }
        if (ctx->pc != 0x175388u) { return; }
    }
    ctx->pc = 0x175388u;
label_175388:
    // 0x175388: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x175388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x17538c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x17538cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x175390: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x175390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x175394: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x175394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175398: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x175398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    // 0x17539c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17539cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1753a0: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x1753a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x1753a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1753a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1753a8: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x1753a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x1753ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1753acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1753b0: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x1753b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x1753b4: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x1753b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
    // 0x1753b8: 0xae0002c0  sw          $zero, 0x2C0($s0)
    ctx->pc = 0x1753b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 704), GPR_U32(ctx, 0));
    // 0x1753bc: 0xae000388  sw          $zero, 0x388($s0)
    ctx->pc = 0x1753bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 904), GPR_U32(ctx, 0));
    // 0x1753c0: 0xae000500  sw          $zero, 0x500($s0)
    ctx->pc = 0x1753c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1280), GPR_U32(ctx, 0));
    // 0x1753c4: 0xae000384  sw          $zero, 0x384($s0)
    ctx->pc = 0x1753c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 0));
    // 0x1753c8: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x1753c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
    // 0x1753cc: 0xae040580  sw          $a0, 0x580($s0)
    ctx->pc = 0x1753ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1408), GPR_U32(ctx, 4));
    // 0x1753d0: 0xae030584  sw          $v1, 0x584($s0)
    ctx->pc = 0x1753d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1412), GPR_U32(ctx, 3));
    // 0x1753d4: 0xae030590  sw          $v1, 0x590($s0)
    ctx->pc = 0x1753d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1424), GPR_U32(ctx, 3));
    // 0x1753d8: 0xae020594  sw          $v0, 0x594($s0)
    ctx->pc = 0x1753d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1428), GPR_U32(ctx, 2));
    // 0x1753dc: 0xae000598  sw          $zero, 0x598($s0)
    ctx->pc = 0x1753dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1432), GPR_U32(ctx, 0));
    // 0x1753e0: 0xae04059c  sw          $a0, 0x59C($s0)
    ctx->pc = 0x1753e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1436), GPR_U32(ctx, 4));
    // 0x1753e4: 0xae0005a0  sw          $zero, 0x5A0($s0)
    ctx->pc = 0x1753e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 0));
    // 0x1753e8: 0xae0005a4  sw          $zero, 0x5A4($s0)
    ctx->pc = 0x1753e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1444), GPR_U32(ctx, 0));
    // 0x1753ec: 0xae0005c4  sw          $zero, 0x5C4($s0)
    ctx->pc = 0x1753ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1476), GPR_U32(ctx, 0));
    // 0x1753f0: 0xae0005a8  sw          $zero, 0x5A8($s0)
    ctx->pc = 0x1753f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1448), GPR_U32(ctx, 0));
    // 0x1753f4: 0xae0005c8  sw          $zero, 0x5C8($s0)
    ctx->pc = 0x1753f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1480), GPR_U32(ctx, 0));
    // 0x1753f8: 0xae0005ac  sw          $zero, 0x5AC($s0)
    ctx->pc = 0x1753f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1452), GPR_U32(ctx, 0));
    // 0x1753fc: 0xae0005cc  sw          $zero, 0x5CC($s0)
    ctx->pc = 0x1753fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1484), GPR_U32(ctx, 0));
    // 0x175400: 0xae0005b0  sw          $zero, 0x5B0($s0)
    ctx->pc = 0x175400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 0));
    // 0x175404: 0xae0005d0  sw          $zero, 0x5D0($s0)
    ctx->pc = 0x175404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1488), GPR_U32(ctx, 0));
    // 0x175408: 0xae0005b4  sw          $zero, 0x5B4($s0)
    ctx->pc = 0x175408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1460), GPR_U32(ctx, 0));
    // 0x17540c: 0xae0005d4  sw          $zero, 0x5D4($s0)
    ctx->pc = 0x17540cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1492), GPR_U32(ctx, 0));
    // 0x175410: 0xae0005b8  sw          $zero, 0x5B8($s0)
    ctx->pc = 0x175410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 0));
    // 0x175414: 0xae0005d8  sw          $zero, 0x5D8($s0)
    ctx->pc = 0x175414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1496), GPR_U32(ctx, 0));
    // 0x175418: 0xae0005bc  sw          $zero, 0x5BC($s0)
    ctx->pc = 0x175418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1468), GPR_U32(ctx, 0));
    // 0x17541c: 0xae0005dc  sw          $zero, 0x5DC($s0)
    ctx->pc = 0x17541cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1500), GPR_U32(ctx, 0));
    // 0x175420: 0xae0005c0  sw          $zero, 0x5C0($s0)
    ctx->pc = 0x175420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1472), GPR_U32(ctx, 0));
    // 0x175424: 0xae0005e0  sw          $zero, 0x5E0($s0)
    ctx->pc = 0x175424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1504), GPR_U32(ctx, 0));
    // 0x175428: 0xae000570  sw          $zero, 0x570($s0)
    ctx->pc = 0x175428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1392), GPR_U32(ctx, 0));
    // 0x17542c: 0xae000574  sw          $zero, 0x574($s0)
    ctx->pc = 0x17542cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1396), GPR_U32(ctx, 0));
    // 0x175430: 0xae000578  sw          $zero, 0x578($s0)
    ctx->pc = 0x175430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1400), GPR_U32(ctx, 0));
    // 0x175434: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x175434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x175438: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x175438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x17543c: 0xae0002c4  sw          $zero, 0x2C4($s0)
    ctx->pc = 0x17543cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 0));
    // 0x175440: 0xae0002c8  sw          $zero, 0x2C8($s0)
    ctx->pc = 0x175440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 0));
    // 0x175444: 0xae0002cc  sw          $zero, 0x2CC($s0)
    ctx->pc = 0x175444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 0));
    // 0x175448: 0xae0002d0  sw          $zero, 0x2D0($s0)
    ctx->pc = 0x175448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 0));
    // 0x17544c: 0xae0002d4  sw          $zero, 0x2D4($s0)
    ctx->pc = 0x17544cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 0));
    // 0x175450: 0xae0002d8  sw          $zero, 0x2D8($s0)
    ctx->pc = 0x175450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 0));
    // 0x175454: 0xae0002dc  sw          $zero, 0x2DC($s0)
    ctx->pc = 0x175454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 0));
    // 0x175458: 0xae0002e0  sw          $zero, 0x2E0($s0)
    ctx->pc = 0x175458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 0));
    // 0x17545c: 0xae000138  sw          $zero, 0x138($s0)
    ctx->pc = 0x17545cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
    // 0x175460: 0xae00013c  sw          $zero, 0x13C($s0)
    ctx->pc = 0x175460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 0));
label_175464:
    // 0x175464: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x175464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x175468: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x175468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x17546c: 0xac600140  sw          $zero, 0x140($v1)
    ctx->pc = 0x17546cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 320), GPR_U32(ctx, 0));
    // 0x175470: 0x28a20018  slti        $v0, $a1, 0x18
    ctx->pc = 0x175470u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x175474: 0xac600144  sw          $zero, 0x144($v1)
    ctx->pc = 0x175474u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 324), GPR_U32(ctx, 0));
    // 0x175478: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x175478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x17547c: 0xac640148  sw          $a0, 0x148($v1)
    ctx->pc = 0x17547cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 328), GPR_U32(ctx, 4));
    // 0x175480: 0xac60014c  sw          $zero, 0x14C($v1)
    ctx->pc = 0x175480u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 332), GPR_U32(ctx, 0));
    // 0x175484: 0xac600150  sw          $zero, 0x150($v1)
    ctx->pc = 0x175484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 336), GPR_U32(ctx, 0));
    // 0x175488: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x175488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x17548c: 0xac640158  sw          $a0, 0x158($v1)
    ctx->pc = 0x17548cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 344), GPR_U32(ctx, 4));
    // 0x175490: 0xac60015c  sw          $zero, 0x15C($v1)
    ctx->pc = 0x175490u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 348), GPR_U32(ctx, 0));
    // 0x175494: 0xac600160  sw          $zero, 0x160($v1)
    ctx->pc = 0x175494u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 352), GPR_U32(ctx, 0));
    // 0x175498: 0xac600164  sw          $zero, 0x164($v1)
    ctx->pc = 0x175498u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 356), GPR_U32(ctx, 0));
    // 0x17549c: 0xac640168  sw          $a0, 0x168($v1)
    ctx->pc = 0x17549cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 360), GPR_U32(ctx, 4));
    // 0x1754a0: 0xac60016c  sw          $zero, 0x16C($v1)
    ctx->pc = 0x1754a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 364), GPR_U32(ctx, 0));
    // 0x1754a4: 0xac600170  sw          $zero, 0x170($v1)
    ctx->pc = 0x1754a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 368), GPR_U32(ctx, 0));
    // 0x1754a8: 0xac600174  sw          $zero, 0x174($v1)
    ctx->pc = 0x1754a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 372), GPR_U32(ctx, 0));
    // 0x1754ac: 0xac640178  sw          $a0, 0x178($v1)
    ctx->pc = 0x1754acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 376), GPR_U32(ctx, 4));
    // 0x1754b0: 0xac60017c  sw          $zero, 0x17C($v1)
    ctx->pc = 0x1754b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 380), GPR_U32(ctx, 0));
    // 0x1754b4: 0xac600180  sw          $zero, 0x180($v1)
    ctx->pc = 0x1754b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 384), GPR_U32(ctx, 0));
    // 0x1754b8: 0xac600184  sw          $zero, 0x184($v1)
    ctx->pc = 0x1754b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 388), GPR_U32(ctx, 0));
    // 0x1754bc: 0xac640188  sw          $a0, 0x188($v1)
    ctx->pc = 0x1754bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 392), GPR_U32(ctx, 4));
    // 0x1754c0: 0xac60018c  sw          $zero, 0x18C($v1)
    ctx->pc = 0x1754c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 396), GPR_U32(ctx, 0));
    // 0x1754c4: 0xac600190  sw          $zero, 0x190($v1)
    ctx->pc = 0x1754c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 400), GPR_U32(ctx, 0));
    // 0x1754c8: 0xac600194  sw          $zero, 0x194($v1)
    ctx->pc = 0x1754c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 404), GPR_U32(ctx, 0));
    // 0x1754cc: 0xac640198  sw          $a0, 0x198($v1)
    ctx->pc = 0x1754ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 408), GPR_U32(ctx, 4));
    // 0x1754d0: 0xac60019c  sw          $zero, 0x19C($v1)
    ctx->pc = 0x1754d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 412), GPR_U32(ctx, 0));
    // 0x1754d4: 0xac6001a0  sw          $zero, 0x1A0($v1)
    ctx->pc = 0x1754d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 416), GPR_U32(ctx, 0));
    // 0x1754d8: 0xac6001a4  sw          $zero, 0x1A4($v1)
    ctx->pc = 0x1754d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 420), GPR_U32(ctx, 0));
    // 0x1754dc: 0xac6401a8  sw          $a0, 0x1A8($v1)
    ctx->pc = 0x1754dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 424), GPR_U32(ctx, 4));
    // 0x1754e0: 0xac6001ac  sw          $zero, 0x1AC($v1)
    ctx->pc = 0x1754e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 428), GPR_U32(ctx, 0));
    // 0x1754e4: 0xac6001b0  sw          $zero, 0x1B0($v1)
    ctx->pc = 0x1754e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 432), GPR_U32(ctx, 0));
    // 0x1754e8: 0xac6001b4  sw          $zero, 0x1B4($v1)
    ctx->pc = 0x1754e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 436), GPR_U32(ctx, 0));
    // 0x1754ec: 0xac6401b8  sw          $a0, 0x1B8($v1)
    ctx->pc = 0x1754ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 440), GPR_U32(ctx, 4));
    // 0x1754f0: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1754F0u;
    {
        const bool branch_taken_0x1754f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1754F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1754F0u;
            // 0x1754f4: 0xac6001bc  sw          $zero, 0x1BC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 444), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1754f0) {
            ctx->pc = 0x175464u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_175464;
        }
    }
    ctx->pc = 0x1754F8u;
    // 0x1754f8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1754f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1754fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1754fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175500:
    // 0x175500: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x175500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x175504: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x175504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x175508: 0xaca002e8  sw          $zero, 0x2E8($a1)
    ctx->pc = 0x175508u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 744), GPR_U32(ctx, 0));
    // 0x17550c: 0x28620018  slti        $v0, $v1, 0x18
    ctx->pc = 0x17550cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x175510: 0xaca002ec  sw          $zero, 0x2EC($a1)
    ctx->pc = 0x175510u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 748), GPR_U32(ctx, 0));
    // 0x175514: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x175514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x175518: 0xaca002f0  sw          $zero, 0x2F0($a1)
    ctx->pc = 0x175518u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 752), GPR_U32(ctx, 0));
    // 0x17551c: 0xaca002f4  sw          $zero, 0x2F4($a1)
    ctx->pc = 0x17551cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 756), GPR_U32(ctx, 0));
    // 0x175520: 0xaca002f8  sw          $zero, 0x2F8($a1)
    ctx->pc = 0x175520u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 760), GPR_U32(ctx, 0));
    // 0x175524: 0xaca002fc  sw          $zero, 0x2FC($a1)
    ctx->pc = 0x175524u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 764), GPR_U32(ctx, 0));
    // 0x175528: 0xaca00300  sw          $zero, 0x300($a1)
    ctx->pc = 0x175528u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 768), GPR_U32(ctx, 0));
    // 0x17552c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x17552Cu;
    {
        const bool branch_taken_0x17552c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17552Cu;
            // 0x175530: 0xaca00304  sw          $zero, 0x304($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 772), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17552c) {
            ctx->pc = 0x175500u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_175500;
        }
    }
    ctx->pc = 0x175534u;
    // 0x175534: 0xae000348  sw          $zero, 0x348($s0)
    ctx->pc = 0x175534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 840), GPR_U32(ctx, 0));
    // 0x175538: 0x260403c0  addiu       $a0, $s0, 0x3C0
    ctx->pc = 0x175538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 960));
    // 0x17553c: 0xae000510  sw          $zero, 0x510($s0)
    ctx->pc = 0x17553cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1296), GPR_U32(ctx, 0));
    // 0x175540: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175544: 0xae000530  sw          $zero, 0x530($s0)
    ctx->pc = 0x175544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1328), GPR_U32(ctx, 0));
    // 0x175548: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x175548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x17554c: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x17554cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x175550: 0xae000514  sw          $zero, 0x514($s0)
    ctx->pc = 0x175550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1300), GPR_U32(ctx, 0));
    // 0x175554: 0xae000534  sw          $zero, 0x534($s0)
    ctx->pc = 0x175554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1332), GPR_U32(ctx, 0));
    // 0x175558: 0xae000554  sw          $zero, 0x554($s0)
    ctx->pc = 0x175558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 0));
    // 0x17555c: 0xae000518  sw          $zero, 0x518($s0)
    ctx->pc = 0x17555cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 0));
    // 0x175560: 0xae000538  sw          $zero, 0x538($s0)
    ctx->pc = 0x175560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1336), GPR_U32(ctx, 0));
    // 0x175564: 0xae000558  sw          $zero, 0x558($s0)
    ctx->pc = 0x175564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1368), GPR_U32(ctx, 0));
    // 0x175568: 0xae00051c  sw          $zero, 0x51C($s0)
    ctx->pc = 0x175568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1308), GPR_U32(ctx, 0));
    // 0x17556c: 0xae00053c  sw          $zero, 0x53C($s0)
    ctx->pc = 0x17556cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1340), GPR_U32(ctx, 0));
    // 0x175570: 0xae00055c  sw          $zero, 0x55C($s0)
    ctx->pc = 0x175570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1372), GPR_U32(ctx, 0));
    // 0x175574: 0xae000520  sw          $zero, 0x520($s0)
    ctx->pc = 0x175574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1312), GPR_U32(ctx, 0));
    // 0x175578: 0xae000540  sw          $zero, 0x540($s0)
    ctx->pc = 0x175578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1344), GPR_U32(ctx, 0));
    // 0x17557c: 0xae000560  sw          $zero, 0x560($s0)
    ctx->pc = 0x17557cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 0));
    // 0x175580: 0xae000524  sw          $zero, 0x524($s0)
    ctx->pc = 0x175580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1316), GPR_U32(ctx, 0));
    // 0x175584: 0xae000544  sw          $zero, 0x544($s0)
    ctx->pc = 0x175584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1348), GPR_U32(ctx, 0));
    // 0x175588: 0xae000564  sw          $zero, 0x564($s0)
    ctx->pc = 0x175588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 0));
    // 0x17558c: 0xae000528  sw          $zero, 0x528($s0)
    ctx->pc = 0x17558cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1320), GPR_U32(ctx, 0));
    // 0x175590: 0xae000548  sw          $zero, 0x548($s0)
    ctx->pc = 0x175590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1352), GPR_U32(ctx, 0));
    // 0x175594: 0xae000568  sw          $zero, 0x568($s0)
    ctx->pc = 0x175594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1384), GPR_U32(ctx, 0));
    // 0x175598: 0xae00052c  sw          $zero, 0x52C($s0)
    ctx->pc = 0x175598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1324), GPR_U32(ctx, 0));
    // 0x17559c: 0xae00054c  sw          $zero, 0x54C($s0)
    ctx->pc = 0x17559cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1356), GPR_U32(ctx, 0));
    // 0x1755a0: 0xc049c86  jal         func_127218
    ctx->pc = 0x1755A0u;
    SET_GPR_U32(ctx, 31, 0x1755A8u);
    ctx->pc = 0x1755A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1755A0u;
            // 0x1755a4: 0xae00056c  sw          $zero, 0x56C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1388), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1755A8u; }
        if (ctx->pc != 0x1755A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1755A8u; }
        if (ctx->pc != 0x1755A8u) { return; }
    }
    ctx->pc = 0x1755A8u;
label_1755a8:
    // 0x1755a8: 0x26040460  addiu       $a0, $s0, 0x460
    ctx->pc = 0x1755a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1120));
    // 0x1755ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1755acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1755b0: 0xc049c86  jal         func_127218
    ctx->pc = 0x1755B0u;
    SET_GPR_U32(ctx, 31, 0x1755B8u);
    ctx->pc = 0x1755B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1755B0u;
            // 0x1755b4: 0x240600a0  addiu       $a2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1755B8u; }
        if (ctx->pc != 0x1755B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1755B8u; }
        if (ctx->pc != 0x1755B8u) { return; }
    }
    ctx->pc = 0x1755B8u;
label_1755b8:
    // 0x1755b8: 0xae000380  sw          $zero, 0x380($s0)
    ctx->pc = 0x1755b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 896), GPR_U32(ctx, 0));
    // 0x1755bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1755bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1755c0: 0xae000370  sw          $zero, 0x370($s0)
    ctx->pc = 0x1755c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 0));
    // 0x1755c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1755c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1755c8: 0xae000368  sw          $zero, 0x368($s0)
    ctx->pc = 0x1755c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 0));
    // 0x1755cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1755ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1755d0: 0xae000374  sw          $zero, 0x374($s0)
    ctx->pc = 0x1755d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 884), GPR_U32(ctx, 0));
    // 0x1755d4: 0xae000394  sw          $zero, 0x394($s0)
    ctx->pc = 0x1755d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 916), GPR_U32(ctx, 0));
    // 0x1755d8: 0xae0003a4  sw          $zero, 0x3A4($s0)
    ctx->pc = 0x1755d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 932), GPR_U32(ctx, 0));
    // 0x1755dc: 0xae0003a8  sw          $zero, 0x3A8($s0)
    ctx->pc = 0x1755dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 936), GPR_U32(ctx, 0));
    // 0x1755e0: 0xae0003ac  sw          $zero, 0x3AC($s0)
    ctx->pc = 0x1755e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 940), GPR_U32(ctx, 0));
    // 0x1755e4: 0xae000500  sw          $zero, 0x500($s0)
    ctx->pc = 0x1755e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1280), GPR_U32(ctx, 0));
    // 0x1755e8: 0xae000504  sw          $zero, 0x504($s0)
    ctx->pc = 0x1755e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1284), GPR_U32(ctx, 0));
    // 0x1755ec: 0xae00034c  sw          $zero, 0x34C($s0)
    ctx->pc = 0x1755ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 844), GPR_U32(ctx, 0));
    // 0x1755f0: 0xae000350  sw          $zero, 0x350($s0)
    ctx->pc = 0x1755f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 0));
    // 0x1755f4: 0xae030354  sw          $v1, 0x354($s0)
    ctx->pc = 0x1755f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 852), GPR_U32(ctx, 3));
    // 0x1755f8: 0xae020358  sw          $v0, 0x358($s0)
    ctx->pc = 0x1755f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 856), GPR_U32(ctx, 2));
    // 0x1755fc: 0xae00035c  sw          $zero, 0x35C($s0)
    ctx->pc = 0x1755fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 0));
    // 0x175600: 0xae000364  sw          $zero, 0x364($s0)
    ctx->pc = 0x175600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 0));
    // 0x175604: 0xc05de6c  jal         func_1779B0
    ctx->pc = 0x175604u;
    SET_GPR_U32(ctx, 31, 0x17560Cu);
    ctx->pc = 0x175608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175604u;
            // 0x175608: 0xae000360  sw          $zero, 0x360($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1779B0u;
    if (runtime->hasFunction(0x1779B0u)) {
        auto targetFn = runtime->lookupFunction(0x1779B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17560Cu; }
        if (ctx->pc != 0x17560Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEffect__11CCharacter2Fv_0x1779b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17560Cu; }
        if (ctx->pc != 0x17560Cu) { return; }
    }
    ctx->pc = 0x17560Cu;
label_17560c:
    // 0x17560c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17560cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175610: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x175610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175614: 0x3e00008  jr          $ra
    ctx->pc = 0x175614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175614u;
            // 0x175618: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17561Cu;
}
